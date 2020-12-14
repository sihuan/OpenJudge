#include<stdio.h>
  int main()
  {    int n,i,o=1,z,x,p;
      scanf("%d",&n);
      x=n;
      int a[n];
     while(n--)
      {scanf("%d",&a[o]);
      o++;}
      while(scanf("%d",&i)!=EOF)
      {    z=0;p=0;
          for(o=1;o<=x;o++)
           {if(i==a[o])
           {if(p==0){printf("%d",o);z=1;p=1;}

            else printf(" %d",o);
           }
           }
          if(z!=0)  printf("\n");
           if(z==0) printf("NOT FOUND\n");
      }

 return 0;
  }

/**************************************************************
	Problem: 1462
	User: 201901061304
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:748 kb
****************************************************************/

