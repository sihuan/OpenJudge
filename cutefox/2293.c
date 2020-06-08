#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double y;
    int a,b,c,p,q,x,t;
    scanf("%d%d%d",&a,&b,&c);
    while(scanf("%d%d",&p,&q)!=EOF)
    {
        for(x=q; x>=p; x--)
        {
            y=1.0*(c-a*x)/b;
            t=y;
            if(t==y&&y>=p&&y<=q&&(y!=0||x!=0))
                  break;
        }
            if(x<p)
        printf("no\n");
    else
        printf("%d %.0lf\n",x,y);
    }

    return 0;
}

/**************************************************************
	Problem: 2293
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

