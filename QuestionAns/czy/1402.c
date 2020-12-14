#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a%2==0)
    {
        sum=sum+a;
    }
    else
        {
            sum=sum+1+a;
        }
     if(b%2==0)
    {
        sum=sum+b;
    }
    else
        {
            sum=sum+1+b;
        }
         if(c%2==0)
    {
        sum=sum+c;
    }
    else
        {
            sum=sum+c+1;
        }
        printf("%d\n",sum);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

