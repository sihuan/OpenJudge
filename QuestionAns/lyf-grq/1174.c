#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
    int n,a,b,m[100],j;//a是个数，b是平移格数
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&a);
      if(a==0)
        printf("\n");
      else
      {
       scanf(" %d",&b);
       for(j=1;j<=a;j++)
           scanf(" %d",&m[j]);
           b=b%a;
           if(b<0)
            b=b+a;
        for(j=a+b;j>=b+1;j--)
            m[j]=m[j-b];
        for(int k=1;k<=b;k++)
            m[k]=m[a+k];
            printf("%d",m[1]);
        for(int z=2;z<=a;z++)
            printf(" %d",m[z]);
        printf("\n");
      }
    }
}

/**************************************************************
	Problem: 1174
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

