#include <stdio.h>

int main()
{
    int start,step,times;
    scanf("start = %d, step = %d, times = %d",&start,&step,&times);
    for(int i=1;i<=times;i++)
    {
    	if(i==1)
    	printf("%d",start);
    	else
    	printf(" %d",start+=step);
	}
}

/**************************************************************
	Problem: 1090
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

