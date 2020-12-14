#include <stdio.h>
  int print_graphic(int n,char c)
   {int i,z,x;
      for (i=1;i<=n;i++)
      {
          for(z=1;z<=n-i;z++)
              printf(" ");
          for(x=1;x<=i+i-1;x++)
             printf("%c",c);
             printf("\n");
      }
   }


int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

