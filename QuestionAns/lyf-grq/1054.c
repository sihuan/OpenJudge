#include<stdio.h>
#include<string.h>
int main()
{
   int hang,lie,hang2,lie2,count=0;
   int a[101][101],b[101][101];
   while(1)
   {
       count++;
        if(count%2==1)
     {
         scanf("%d %d",&hang,&lie);
         if(hang==0&&lie==0)
            break;
       for(int i=1;i<=hang;i++)
       {
           for(int j=1;j<=lie;j++)
               scanf("%d",&a[i][j]);
       }
     }
       else
     {
        scanf("%d %d",&hang2,&lie2);
        if(hang2==0&&lie2==0)
             break;
            for(int i=1;i<=hang2;i++)
           {
            for(int j=1;j<=lie2;j++)
               scanf("%d",&b[i][j]);
           }
      }
       if(count%2==0&&(hang!=hang2||lie!=lie2))
            {
                printf("Not satisfied the definition of matrix addition!\n");
                printf("\n");
            }
        else if(count%2==0)
       {
         for(int i=1;i<=hang;i++)
        {
           for(int j=1;j<=lie;j++)
               {
                 if(j==1)
                   printf("%d",a[i][j]+b[i][j]);
                 else
                   printf(" %d",a[i][j]+b[i][j]);
               }
               printf("\n");
        }
        printf("\n");
       }
   if(count%2==1)
    continue;
   }

}






/**************************************************************
	Problem: 1054
	User: 202001061101
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:756 kb
****************************************************************/

