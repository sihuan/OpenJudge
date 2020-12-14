#include <stdio.h>
#include <stdlib.h>

int main()
{
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int M,m,n,i,j,k;
    scanf("%d",&M);
  while(M!=0)
    {
         M--;
        scanf("%d%d",&m,&n);
        int a[200][200];
        for(j=0;j<m;j++)
            for(k=0;k<n;k++)
            scanf("%d",&a[j][k]);
        for(j=0;j<n;j++)
        {
            for(k=0;k<m-1;k++)
                printf("%d ",a[k][j]);
                printf("%d",a[k][j]);
            printf("\n");
        }
       putchar('\n');
    }
        return 0;
}

/**************************************************************
	Problem: 1053
	User: 201901060203
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:828 kb
****************************************************************/

