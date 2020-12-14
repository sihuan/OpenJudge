#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int max(int a,int b)
{
    int c = a>b?a:b;
    return c;
}
int main() {
    int i,j,k,x,y,m,n;
    int a[100][1010];
    memset(a,0,sizeof(a));
    int b[1010];
    int c[1010];
    int cnt=0;
    scanf("%d", &m);
    for(i=1; i<=m; i++) {
            scanf("%d",&a[i][0]);
       for(j=1;j<=a[i][0];j++)
       scanf("%d",&a[i][j]);
 
    for(k=1;k<=max(a[i][0],a[i-1][0]);k++)
    {
        c[k]=a[i][k]+a[i-1][k];
    }
    if(i!=1)
        {
            if(a[i-1][0]==0&&a[i][0]==0)
                printf("\n");
            else
            {
            for(k=1;k<=max(a[i][0],a[i-1][0]);k++)
                {if(k==1)
                printf("%d",c[k]);
            else
                printf(" %d",c[k]);
                }
                printf("\n");
            }
            if(i==m)
            {
                if(a[i][0]==0)printf("\n");
                else
                {
            for(k=1;k<=a[i][0];k++)
                {if(k==1)
                printf("%d",a[i][k]);
            else
                printf(" %d",a[i][k]);
                }
                printf("\n");
                }
            }
 
        }
 
      if(m==1)
      {
          if(a[1][0]==0)
            printf("\n");
          else
          {
          for(k=1;k<=a[1][0];k++)
                {if(k==1)
                printf("%d",a[1][k]);
            else
                printf(" %d",a[1][k]);
                }
                printf("\n");
      }
      }
 
 
 
 
    }
 
    return 0;
}

/**************************************************************
	Problem: 1052
	User: 201801020908
	Language: C
	Result: Accepted
	Time:40 ms
	Memory:1080 kb
****************************************************************/

