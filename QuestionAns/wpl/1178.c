#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p[105]= {0};
    int a;
    int m;
    int i;
    while(scanf("%d",&a)!=EOF)
    {
        if(a>=0&&a<=100)
        {
            p[a]=p[a]+1;
        }
    }
    m=p[0];
    for(i=0; i<=100; i++)
    {
        if(p[i]>m)
        {
            m=p[i];
        }
    }
    for(i=0; i<=100; i++)
    {
        if(p[i]==m)
            printf("%d\n",i);
    }
    return 0;
}

/**************************************************************
	Problem: 1178
	User: 201901060819
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

