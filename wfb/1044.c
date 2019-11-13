#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{

    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n == 0)break;
        int i;
        int sum=0;
        for(i=0; i<n; ++i)
        {
            int a = 0;
            scanf("%d",&a);
            sum += a;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

