  #include <stdio.h>
  int main()
  {   int n,i,z,x;
     scanf("%d",&n);
      for (i=1;i<=n;i++)
      {
          for(z=1;z<=n-i;z++)
              printf(" ");
          for(x=1;x<=i+i-1;x++)
              printf("+");
          printf("\n");





      }



      return 0;
  }

/**************************************************************
	Problem: 1164
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

