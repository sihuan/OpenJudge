#include <stdio.h>
int A(int m,int n)
{
	int c;
	if(m==0)
	c=n+1;
	else if(m>0&&n==0)
	c=A(m-1,1);
	else if(m>0&&n>0)
	c=A(m-1,A(m,n-1));
	return c;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("A(%d, %d) = %d",m,n,A(m,n));
    return 0;
}
/**************************************************************
	Problem: 1512
	User: 202001061101
	Language: C
	Result: Accepted
	Time:1256 ms
	Memory:1596 kb
****************************************************************/

