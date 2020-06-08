#include <stdio.h>
int sum(int n)
{int a;
scanf("%d",&a);
if(n==1)
    return a;
else
    return  a+sum(n-1);
    }
int main(void)
{
int n,b;
scanf("%d",&n);
b=sum(n);
printf("%d",b);
    return 0;
}

/**************************************************************
	Problem: 1764
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

