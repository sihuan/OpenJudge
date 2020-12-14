  #include <stdio.h>
  int main()
  {   int n,i,z,x;
     while(scanf("%d",&n)!=EOF)
     if(n%2==0)
    {
        for (i=1;i<=n;i++)
      {
          for(z=1;z<=n-i;z++)
              printf(" ");
          for(x=1;x<=i+i-1;x++)
              printf("+");
              printf("\n");
        }
        printf("\n");
      }
    else
    {
          for (i=1;i<=n;i++)
      {
          for(z=1;z<i;z++)
              printf(" ");
          for(x=1+2*(n-i);x>0;x--)
              printf("+");
          printf("\n");

      }
       if(n==0)break;
        printf("\n");
    }
      return 0;
  }

/**************************************************************
	Problem: 1096
	User: 201901061304
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

