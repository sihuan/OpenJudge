#include <stdio.h>
int main(){
  int sum=0;
  int a;
  int N=0;
  while(scanf("%d",&N)&&N!=0){
    sum = 0;
    for(int i = 0;i<N;++i){
      scanf("%d",&a);
      sum += a;
    }
    printf("%d\n",sum);
  }
  return 0;
}

/**************************************************************
	Problem: 1044
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

