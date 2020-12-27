#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b,c,t;
   while(scanf("%d %d %d",&a,&b,&c)!=EOF)
   {
     if(a*b*c==0)
        break;
     else
      {
      if(a+b>c&&a+c>b&&b+c>a)
       {
           if(a<b){t=b;b=a;a=t;}
           if(a<c){t=c;c=a;a=t;}
           if(b<c){t=c;c=b;b=t;}
           if(a==b&&b==c)
            printf("a equileteral triangle\n");
           else if (b==c||a==b)
            printf("a isosceles triangle\n");
           else if(a*a==b*b+c*c)
            printf("a right triangle\n");
           else
            printf("a triangle\n");
       }
      else
      printf("not a triangle\n");
     }
   }

}







/**************************************************************
	Problem: 1097
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

