#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p,q;
    while(scanf("%d%d",&p,&q)!=EOF)
    {
        int x,y;
        int i=0;
        for(x=q;x>=p;x--)
        {
            y=(c-a*x)/b;
            if(y<=q&&y>=p&&a*x+b*y==c)
            {
                if(x==0&&y==0)
                    continue;
                printf("%d %d\n",x,y);
                i++;
                break;
            }

        }
        if(i==0)
            printf("no\n");
    }
}

/**************************************************************
	Problem: 2293
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

