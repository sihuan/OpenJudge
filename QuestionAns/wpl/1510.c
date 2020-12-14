#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n, m,i;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int a = 0;
        for(i=2; i<=n; i++)
        {
            a = (a+m)%i;
        }
        printf("%d\n",a+1);
    }
    return 0;
}
/**************************************************************
	Problem: 1510
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

