#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int start=0,step=0,end=0;
    scanf("start = %d, step = %d, end = %d",&start,&step,&end);
   //scanf("%d%d%d",&start,&step,&end);
    int flag=0;
    int i=0;

    if(step>0)
    {
    while(start<=end)
    {
        if(flag==0)
        {
            printf("%d",start);
            flag=1;
        }
        else
        {
            printf(" %d",start);
        }

        start=start+step;
    }
    }
    else if(step<0)
    {
         while(start>=end)
    {
        if(flag==0)
        {
            printf("%d",start);
            flag=1;
        }
        else
        {
            printf(" %d",start);
        }

        start=start+step;
    }
    }
    return 0;
}

/**************************************************************
	Problem: 1091
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

