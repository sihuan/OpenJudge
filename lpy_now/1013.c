#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    x=100-x;
    int a=x/20;
    printf("$20 bills: %d\n",a);
    x-=a*20;
    a=x/10;
    printf("$10 bills: %d\n",a);
    x-=a*10;
    a=x/5;
    printf(" $5 bills: %d\n",a);
    x-=a*5;
    printf(" $1 bills: %d",x);
    return 0;
}

/**************************************************************
	Problem: 1013
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

