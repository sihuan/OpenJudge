#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        c=(a>b?a:b);
        d=(a>b?b:a);
        if(d==0)
            printf("%d 0\n",c);
        else
        {
            f=c*d;
            while(e!=0)
            {
                e=c%d;
                c=d;
                d=e;
            }
            printf("%d %d\n",c,f/c);
            e=1;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1041
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

