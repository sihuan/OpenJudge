#include <stdio.h>
int main()
{
   int m,n,i,k,j;
   scanf("%d %d",&m,&n);
   printf("=====\n");
   for(i=n;i>=m;i--)
   {
       k=0;
       for(j=1;j<i;j++)
       {
           if(i%j==0)
           {
               k++;
           }
        }
        if(k==1)
       {
        printf("%d\n",i);
       }
    }
    printf("=====");
    return 0;
}


/**************************************************************
	Problem: 1027
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

