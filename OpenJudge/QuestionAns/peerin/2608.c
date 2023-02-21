#include <stdio.h>

double func(double x,int n){

if(n==1)
    return x/(n+x);
else{
    return x/(n+func(x,n-1));
}

}


int main(){
double x;
int n;
scanf("%lf%d",&x,&n);
printf("%.2f\n",func(x,n));


return 0;
}

/**************************************************************
	Problem: 2608
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

