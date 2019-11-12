#include <stdio.h>
 int main()
 {
     int x,count=0,j=0,sum1=0,sum2=0;
     double y,z;
     while(scanf("%d",&x)!=EOF)
     {   if (x==0) break;
         if(x<0)
         {   j++;
             sum1+=x;
         }
         if(x>0)
         {
             count++;
             sum2+=x;
         }

     }
     if(j!=0)
     {y=sum1/(double)j;
     printf("%d %.2lf\n",j,y);
     }
     else printf("0\n");

     if(count!=0)
     {z=sum2/(double)count;
     printf("%d %.2lf\n",count,z);
     }
     else printf("0\n");



return 0;

 }

/**************************************************************
	Problem: 1120
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

