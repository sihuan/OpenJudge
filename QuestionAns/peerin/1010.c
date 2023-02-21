#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  printf("%s",n%4==0&&n%100!=0||n%400==0?"Yes":"No");
  return 0;
}

/**************************************************************
	Problem: 1010
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

