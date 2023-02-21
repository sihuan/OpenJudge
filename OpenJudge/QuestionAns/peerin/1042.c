#include <stdio.h>
int main(){
  int sum=0;
  int a;
  int N;
  while(scanf("%d",&N)!=EOF){
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
	Problem: 1042
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

