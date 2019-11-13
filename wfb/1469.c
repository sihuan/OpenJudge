#include <stdio.h>
#include <stdlib.h>

int ans[200005]={0,};

int main()
{
    int n;
    scanf("%d",&n);
    int i,k;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&k);
        ++ans[k];
    }
    int max = 0;
    for(i=0; i<n; ++i)
    {
        if(ans[i]>max)
        {
            max = ans[i];
            k = i;
        }
    }
    printf("%d\n",ans[k]);

    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201601011420
	Language: C
	Result: Accepted
	Time:60 ms
	Memory:1528 kb
****************************************************************/

