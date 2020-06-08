#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char c1[21],c2[21];
    scanf("%s",&c1);
    for(i=0;i<5;i++)
    {
      scanf("%s",&c2);
      if(strcmp(c1,c2)==0)
      {
          puts("Welcome!");
          break;
      }
      else
        puts("Wrong!");
    }
      while(scanf("%s",&c2)!=EOF&&i==5)
      puts("Out of limited!");
    return 0;
}

/**************************************************************
	Problem: 1093
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

