#include <stdio.h>

int main(){
  int a[100],b[100];
  int i = 0;
  for(;i < 100;i++){
    if(scanf("%d %d",a + i,b + i) == EOF)
      break;
  }
  for(int i2 = 0;i2 < i;i2++){
    printf("%d\n\n",*(a+i2)+*(b+i2));
  }
  return 0;
}

/**************************************************************
	Problem: 1023
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

