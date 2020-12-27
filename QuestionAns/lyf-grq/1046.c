#include<stdio.h>
#include<time.h>
int main()
{
   scanf("COCK,HEN,CHICK,MONEY,CHICKS");
   int a,b,c,d,m,n;
   int x,y,z;
   while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
   {
       int count=0;
       for(int x=0;x<=m/a;x++)
       {
           z=(b*d*(n-x)-d*(m-a*x))/(b*d-c);
           y=(d*(m-a*x)-c*(n-x))/(b*d-c);
           if(y>=0&&z>=0&&x+y+z==n&&(a*x*d+b*y*d+c*z==m*d))
          {
            if(count==0)
            printf("COCKS,HENS,CHICKS\n");
            count++;
            printf("%d,%d,%d\n",x,y,z);
          }
       }
       if(count==0)
        printf("Cannot buy!\n");
        printf("\n");
    }

}

/**************************************************************
	Problem: 1046
	User: 202001061101
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

