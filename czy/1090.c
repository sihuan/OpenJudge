#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int start=0,step=0,times=0;
    scanf("start = %d, step = %d, times = %d",&start,&step,&times);
    int flag=0;
    int i=0;

    for(i=1;i<=times;++i)
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
    return 0;
}

/**************************************************************
	Problem: 1090
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

