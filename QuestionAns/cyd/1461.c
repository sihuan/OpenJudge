#include<stdio.h>
  int main()
  {    int n,i,o=1,z,x;
      scanf("%d",&n);
      x=n;
      int a[n];
     while(n--)
      {scanf("%d",&a[o]);
      o++;}
      while(scanf("%d",&i)!=EOF)
      {
           if((i>=1&&i<=x)||(i>=-x&&i<=-1))
         {
          {if(i>0) printf("%d\n",a[i]);}
          {if(i<0) printf("%d\n",a[x+1+i]);}
         }
        else printf("OUT OF RANGE\n");

      }

 return 0;
  }

/**************************************************************
	Problem: 1461
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

