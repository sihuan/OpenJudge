#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int m;
    scanf("%d",&m);
    int k;
    for(k=0; k<m; ++k)
    {
        int n;
        scanf("%d",&n);
        int i;
        int sum=0;
        for(i=0; i<n; ++i)
        {
            int a = 0;
            scanf("%d",&a);
            sum += a;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1045
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

