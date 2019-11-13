#include <stdio.h>

int Ack(int m,int n)
{
    if(m==0) return n+1;
    else if(n==0) return Ack(m-1,1);
    else return Ack(m-1,Ack(m,n-1));
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("A(%d, %d) = %d",m,n,Ack(m,n));
    return 0;
}

/**************************************************************
	Problem: 1512
	User: 201601011420
	Language: C
	Result: Accepted
	Time:1140 ms
	Memory:1288 kb
****************************************************************/

