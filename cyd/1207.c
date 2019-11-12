#include<stdio.h>
  int main()
  {  int n,m,sum=0,a,b,c,i,count=0;
      while(scanf("%d",&m)!=EOF)
      {   sum=0;
          for(i=100;i<=999;i++)
          {  a=i%10;
             c=i/100;
             b=i/10%10;
            if(i%m==0&&a!=c&&c!=b&&a!=b) sum+=i;
          }
          count++;
          printf("case %d:%d\n",count,sum);
      }
 return 0;
  }

/**************************************************************
	Problem: 1207
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

