#include<stdio.h>
int main()
{
  int i,a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a%2!=0)
    a=a+1;
  if(b%2!=0)
    b=b+1;
  if(c%2!=0)
    c=c+1;
  printf("%d",a+b+c);
  return 0;
}
/**************************************************************
	Problem: 1402
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

