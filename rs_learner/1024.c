#include<stdio.h>
int main()
{
    int n,i,a,b,max=0,min=0;
    scanf("%d",&n);
    scanf("%d",&a);
    max=a;
    min=a;
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&b);
        if(b>max)
            max=b;
        if(b<min)
            min=b;
    }
    printf("The maximum number is %d.\n",max);
    printf("The minimum number is %d.",min);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

