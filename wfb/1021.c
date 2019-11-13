#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",x+y);
    }

        return 0;
}

/**************************************************************
	Problem: 1021
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

