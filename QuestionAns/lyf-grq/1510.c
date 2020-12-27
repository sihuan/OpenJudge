#include<stdio.h>
#include<string.h>
int main()
{
  int m,n,a[1001];
  int i,k,j;
  while(scanf("%d %d",&m,&n)!=EOF)
  {
      for(i=1;i<=m;i++)
      a[i]=i;
      i=0;
      k=0;
      j=1;
      while(j<=m-1)
      {
          if(a[i+1]!=0)
            k++;
          if(k==n)
          {
              a[i+1]=0;
              k=0;
              j++;
          }
          i++;
          if(i==m)
              i=0;
      }
      for(int k=1;k<=m;k++)
      {
          if(a[k]!=0)
          printf("%d\n",a[k]);
      }
  }

}






/**************************************************************
	Problem: 1510
	User: 202001061101
	Language: C
	Result: Accepted
	Time:1096 ms
	Memory:748 kb
****************************************************************/

