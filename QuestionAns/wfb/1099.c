#include <stdio.h>
#include <stdlib.h>

int a[1005];
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
        scanf("%d",a+i);
    int j;
    for(i=0; i<n-1; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<n-1; ++i)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[i]);
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201601011420
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:752 kb
****************************************************************/

