
#include<stdio.h>
int main()
  { int a[1100],n,j,k,t,i;
    scanf("%d",&n);
      for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(j=0;j<n-1;j++)
        for(i=0;i<n-1-j;i++)
         if(a[i]>a[i+1])
      {
          t=a[i];a[i]=a[i+1];a[i+1]=t;
      }
      for(i=0;i<n;i++)
      { if(i==0) printf("%d",a[i]);
        else printf(" %d",a[i]);
      }

 return 0;
  }

/**************************************************************
	Problem: 1099
	User: 201901061304
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

