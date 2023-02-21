#include<stdio.h>
#include<math.h>
int main(){
double n;
scanf("%lf",&n);
double n_ = sqrt(n);
if(n_==(int)n_){
    if((int)n%2==0){
        if(n>0){
            printf("yes");
return 0;
        }
    }
}
printf("no");
return 0;
}

/**************************************************************
	Problem: 1403
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

