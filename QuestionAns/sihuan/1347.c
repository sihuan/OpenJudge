#include <stdio.h>
int main() {
  char a[10]={'a','e','i','o','u','A','E','I','O','U'};
  char n;
  scanf("%c",&n);
  int r = 0;
  for (int i = 0; i < 10; i++)
  {
    if (n==a[i])
    {
      r = 1;
      break;
    }
    
  }
  if (r==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  
}
/**************************************************************
	Problem: 1347
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

