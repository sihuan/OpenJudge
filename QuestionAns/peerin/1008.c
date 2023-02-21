#include <stdio.h>

int main(){
  int int1;
  double double1;
  scanf("%d",&int1);
  scanf("%lf",&double1);
  printf("%d\n",int1<0?-int1:int1);
  printf("%g\n",double1<0?-double1:double1);


  return 0;
}

/**************************************************************
	Problem: 1008
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

