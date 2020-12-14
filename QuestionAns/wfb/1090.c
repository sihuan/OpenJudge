#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,n;
    scanf("start = %d, step = %d, times = %d",&a,&b,&n);
    int i;
    for(i=0; i<n; ++i)
    {
        printf("%d ",a+b*i);
    }
    return 0;
}

/**************************************************************
	Problem: 1090
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

