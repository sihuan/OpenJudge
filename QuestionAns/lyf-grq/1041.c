#include<stdio.h>
int main()
{
    int a,b,i,j,t,n,m,k;
 
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        a=m;
        b=n;
        if(a>=b)
        {
            t=a;
            a=b;
            b=t;
        }
 
        i=a;
        while(i!=0)
        {
            i=b%a;
            b=a;
 
            a=i;
 
        }
        printf("%d ",b);
        k=m*n/b;
        printf("%d\n",k);
    }
 
    return 0;
}
/**************************************************************
	Problem: 1041
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

