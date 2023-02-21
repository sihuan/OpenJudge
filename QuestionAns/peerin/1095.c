#include <stdio.h>
int fib[50];
// 2 * 1024 * 1024/4
int fib_f(int n){
  
  fib[0] = 1;
  fib[1] = 2;
  for(int i = 2;i<n;++i){
    fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n-1];
}
int main(){
  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;++i){
    int num;
    scanf("%d",&num);
    printf("%d\n",fib_f(num));

  }
  
  return 0;
}

/**************************************************************
	Problem: 1095
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

