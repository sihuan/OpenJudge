#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void paixv(int a[])
{
    int i,j,temp;
    for(i=0;i<15;i++)
        for(j=0;j<15;j++)
        if(a[i]>a[j])
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
int main()
{
    int i;
    int a[16];
    for(i=0;i<15;i++)
        scanf("%d",&a[i]);
    paixv(a);
        for(i=1;i<15;i++)
        if(a[i]!=a[0])
  {
        printf("%d",a[i]);
        break;
  }
    return 0;
}

/**************************************************************
	Problem: 2421
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

