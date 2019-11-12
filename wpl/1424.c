#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,d=0,c=0;
    while(scanf("%d",&a)!=EOF)
    {
        c=c+1;
        if(c==1)
            b=a;
        if(a>b)
        {
           b=a;
           d=1;
          }
        else if(a==b)
                d=d+1;
    }
    printf("maximum data is %d, whose occurences is %d.",b,d);

    return 0;
}

/**************************************************************
	Problem: 1424
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

