#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,e;
    scanf("start = %d, step = %d, end = %d",&a,&b,&e);
    int n;
    int i=0;
    while(1)
    {
        n = a+b*i;
        if(b < 0)
        {
            if(n<e)break;
        }
        else
            if(n>e) break;
        printf("%d ",n);
        ++i;
    }

    return 0;
}

/**************************************************************
	Problem: 1091
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

