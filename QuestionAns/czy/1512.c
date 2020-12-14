#include <stdio.h>
#define MAX_STR_LEN 101
int f(int m,int n)
{
  if(m==0) return n+1;
  else if(m>0&&n==0) return f(m-1,1);
  else if(m>0 && n>0) return f(m-1,f(m,n-1));
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("A(%d, %d) = %d",m,n,f(m,n));
}

/**************************************************************
	Problem: 1512
	User: 201601160202
	Language: C
	Result: Accepted
	Time:1188 ms
	Memory:1292 kb
****************************************************************/

