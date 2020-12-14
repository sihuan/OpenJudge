#include<stdio.h>

int main(){
    int a,b;

    int x;
    double y;
    scanf("%d",&x);
    scanf("%lf",&y);
if(x<0){
     printf("%d\n",-x);
}
else{
    printf("%d\n",x);
}

        if(y<0){
            printf("%g",-y);
        }
        else{
            printf("%g",y);
        }


}

/**************************************************************
	Problem: 1008
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

