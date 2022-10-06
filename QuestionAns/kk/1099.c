#include <stdio.h>
int main()
{
    int i,j,n,t;
    int a[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (i=1; i<n; i++)/*代表冒泡几次*/
        for(j=0; j<n-1; j++)/*每循环一次便将最大值放到最后*/
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    for(i=0; i<n; i++)
    {
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
}
/**************************************************************
	Problem: 1099
	User: 202001060117
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

