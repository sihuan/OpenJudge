#include <stdio.h>
int main(){
  int sum=0;
  int a;
  int M,N;
  scanf("%d",&M);
  for(int i = 0;i < M;++i){
    sum = 0;
    scanf("%d",&N);
    for(int j = 0;j<N;++j){
      scanf("%d",&a);
      sum += a;
    }
    printf("%d\n\n",sum);
  }
  return 0;
}

/**************************************************************
	Problem: 1045
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

