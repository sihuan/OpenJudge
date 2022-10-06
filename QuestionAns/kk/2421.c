#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
int main()
{
    int inp[15];
    int i,max,min;
    for(i=0;i<15;i++)
        scanf("%d",&inp[i]);
    max=inp[0];
    min=inp[0];
    for(i=1;i<15;i++)
    {
        if(inp[i]>max)
            max=inp[i];
        if(inp[i]<min)
            min=inp[i];
    }
    for(i=0;i<15;i++)
        if(inp[i]==max)
            inp[i]=min;
    max=min;
    for(i=0;i<15;i++)
        if(inp[i]>max)
            max=inp[i];
    printf("%d",max);
}


/**************************************************************
	Problem: 2421
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

