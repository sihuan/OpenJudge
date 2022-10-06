#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15],i;
    for(i=0;i<15;i++)
        scanf("%d",&arr[i]);
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int temp;
        temp=arr[m];
        arr[m]=arr[n];
        arr[n]=temp;
    }
    for(i=0;i<15;i++)
    {
        if(i==0)
            printf("%d",arr[i]);
        else
            printf(" %d",arr[i]);
    }
}


/**************************************************************
	Problem: 2513
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

