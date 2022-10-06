#include <stdio.h>
#include <stdlib.h>

int main()
{
     int start,step,end;
    scanf("start = %d, step = %d, end = %d",&start,&step,&end);
    printf("%d",start);
    if(step>0)
    {
        for(start+=step;start<=end;start+=step)
        printf(" %d",start);
    }
    else
    {
        for(start+=step;start>=end;start+=step)
        printf(" %d",start);
    }
}

/**************************************************************
	Problem: 1091
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

