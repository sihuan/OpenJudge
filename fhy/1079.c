#include <stdio.h>
int main ()
{ int a,b,c,n;
  scanf("%d\n",&n);
  while(n--)
  {
  scanf("%d %d %d",&a,&b,&c);
  if(a+b>c&&c+b>a&&a+c>b)
  {
  
  printf("YES\n");
  }
  else
  {
  printf("NO\n");
  }
  }
  
  
  
  return 0;
}
/**************************************************************
	Problem: 1079
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

