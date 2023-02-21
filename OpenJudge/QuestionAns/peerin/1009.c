#include <stdio.h>

int main(){
  int m,n,x;
  scanf("%d %d %d",&m,&n,&x);
  int sum = m*x;
  double total = sum >= n ? sum*0.88 : sum;
  printf("%.2f",total);
  return 0;

}

/**************************************************************
	Problem: 1009
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

