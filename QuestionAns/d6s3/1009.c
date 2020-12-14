#include<stdio.h>

int main()
{
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);
    if (m*x>n)
        printf("%.2f",m*x*0.88);
    else
        printf("%.2f",(float)(m*x));
}

/**************************************************************
	Problem: 1009
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

