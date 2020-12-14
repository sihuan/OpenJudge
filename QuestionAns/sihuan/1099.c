#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t,n,set[1002];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&set[i]);
    for(i=0; i<n-1; ++i)
    {
        int f=1;
        for(j=0; j<n-i-1; j++)
        {
            if(set[j]>set[j+1])
            {
                t=set[j];
                set[j]=set[j+1];
                set[j+1]=t;
                f=0;
            }
        }
        if(1==f)
            break;
    }
    printf("%d",set[0]);
    for(i=1; i<n; i++)
        printf(" %d",set[i]);
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201801011012
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

