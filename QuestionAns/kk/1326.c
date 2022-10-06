#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a[11],b[10],min,j;
    for(int i=0;i<11;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
        b[i]=abs(a[10]-a[i]);
    min=b[0];
    j=0;
    for(int i=1;i<10;i++)
    {
        if(min>b[i])
        {
            min=b[i];
            j=i;
        }
    }
    printf("%d",a[j]);
}
/**************************************************************
	Problem: 1326
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

