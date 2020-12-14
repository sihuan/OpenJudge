#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,i,max=0;
    int s[110];
    for(i=0;i<110;i++)
        s[i]=0;
    while(scanf("%d",&a)!=EOF)
    {
        if(a<0||a>100)
            continue;
        if(a>=0&&a<=100)
            ++s[a];
    }
    for(i=0;i<=100;++i)
    {
        if(s[i]>max)
            max=s[i];
    }
    for(i=0;i<=100;++i)
    {
        if(s[i]==max)
            printf("%d\n",i);
    }
    return 0;
    }
/**************************************************************
	Problem: 1178
	User: 202001060915
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

