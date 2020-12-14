#include <stdio.h>
int main()
{
    int N,k,j,a[10001],max,flag;
    scanf("%d",&N);
    for(j=0;j<N;j++)
    {
        scanf("%d",&a[j]);
    }
    while(scanf("%d",&k) != EOF)
    {
        max=flag=0;
        for(j=0;j<N;j++)
          {
              if(a[j]==k)
                {
                    max=1;
                    if(flag==0)
                    {
                        printf("%d",j+1);
                        flag=1;
                    }
                    else
                        printf(" %d",j+1);
                }


          }
        if(max==0)
        printf("NOT FOUND");
        printf("\n");
    }
     return 0;
   }

/**************************************************************
	Problem: 1462
	User: 201901060203
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

