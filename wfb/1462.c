#include <stdio.h>
#include <stdlib.h>

int ans[10005];
int ans1[10005];
int main()
{
    int n,i;
    int x;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d",ans+i);
    }
    int a;
    while(scanf("%d",&a) != EOF)
    {
        int k=0;
        int isHave = 0;
        for(i=0; i<n; ++i)
        {
            if(ans[i] == a)
            {
                ans1[k++] = i+1;
                isHave = 1;
            }
        }
        if(isHave == 0) printf("NOT FOUND\n");
        else
        {
            for(i=0; i<k-1; ++i)
            {
                printf("%d ",ans1[i]);
            }
            printf("%d\n",ans1[i]);
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1462
	User: 201601011420
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:824 kb
****************************************************************/

