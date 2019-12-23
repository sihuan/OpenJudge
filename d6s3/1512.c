#include<stdio.h>

int ackermann(int m, int n)
{
    if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return ackermann(m-1,1);
    else if(m>0&&n>0)
        return ackermann(m-1,ackermann(m,n-1));
}

int main()
{
    int m,n,k;
    scanf("%d %d",&m,&n);
    printf("A(%d, %d) = %d",m,n,ackermann(m,n));
}

/**************************************************************
	Problem: 1512
	User: 201901060610
	Language: C
	Result: Accepted
	Time:1180 ms
	Memory:1288 kb
****************************************************************/

