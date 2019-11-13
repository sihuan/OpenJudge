#include <stdio.h>
#include <stdlib.h>

int ans[10005];
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
        int isHave = 0;
        for(i=0; i<n; ++i)
        {
            if(ans[i] == a)
            {
               printf("%d\n",i+1);
               isHave = 1;
               break;
            }
        }
        if(!isHave) printf("NOT FOUND\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1459
	User: 201601011420
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:784 kb
****************************************************************/

