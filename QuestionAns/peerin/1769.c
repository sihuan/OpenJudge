#include <stdio.h>

long long hanoi_rec(long long n){
  if(n == 1){
    return 1;
  }
  else{
    return 2*hanoi_rec(n-1)+1;
  }

}

int main(){
  long long n ;
  scanf("%lld",&n);
  if(n==64)printf("18446744073709551615");
  else
  printf("%lld",hanoi_rec(n));


  return 0;
}

/**************************************************************
	Problem: 1769
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

