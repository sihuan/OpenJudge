
  #include<stdio.h>
  int main()
  {    int n,i,o=1;
      scanf("%d",&n);
      int a[n];
     while(n--)
      {scanf("%d",&a[o]);
      o++;}
      while(scanf("%d",&i)!=EOF)
      {    if(i>o||i<1) {printf("OUT OF RANGE\n"); continue;}
          printf("%d",a[i]);
          printf("\n");

      }


 return 0;
  }

/**************************************************************
	Problem: 1458
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

