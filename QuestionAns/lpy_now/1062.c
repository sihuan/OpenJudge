#include <stdio.h>  
#include <string.h>  
char a[20000];  
int len;  
int main()  
{  
    int i,j,k,l,n,N;  
    int sum;  
    scanf("%d",&N);  
    for(i=1;i<=N;i++)  
      {  
      if(i!=1)  
        printf("\n");  
      scanf("%d%d",&n,&k);  
      gets(a);  
      for(j=1;j<=n;j++)  
        {  
        sum=0;  
        memset(a,0,sizeof(a));  
        gets(a);  
        len=strlen(a);  
        for(l=0;l<=len-1;l++)  
          {  
          if((a[l]>='A'&&a[l]<='Z')||(a[l]>='a'&&a[l]<='z'))  
            {  
            if(a[l]>='a'&&a[l]<='z')  
              a[l]=a[l]-('a'-'A');  
            if(a[l]+k>'Z')  
              a[l]=a[l]+k-('Z'-'A')-1;  
            else if(a[l]+k<'A')  
              a[l]=a[l]+k+('Z'-'A')+1;  
            else
              a[l]=a[l]+k;  
            sum++;  
            }  
          }  
        printf("%d ",sum);  
        for(l=0;l<=len-1;l++)  
          if(a[l]>='A'&&a[l]<='Z')  
            printf("%c",a[l]);  
        printf("\n");  
        }  
      }  
      return 0;  
}

/**************************************************************
	Problem: 1062
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:768 kb
****************************************************************/

