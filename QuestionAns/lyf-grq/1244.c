#include<stdio.h>
#include<string.h>
int main()
{
   int n,h=0,m=0,s=0;
   while(scanf("%d",&n)!=EOF&&n!=0)
   {
       for(int i=n;i>1;i--)
       {
           s++;
           if(s==60)
           {
               s=0;
               m++;
           }
           if(m==60)
           {
               m=0;
               h++;
           }
       }
       printf("%02d:%02d:%02d\n",h,m,s);
       h=0;m=0,s=0;
   }
}

/**************************************************************
	Problem: 1244
	User: 202001061101
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:748 kb
****************************************************************/

