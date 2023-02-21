#include <stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int i;
  for(i = 1;i<=N;++i){

    int max,min;
    scanf("%d%d",&min,&max);
    int sum = 0;
    int j;
    for(j = min;j<=max;++j){
      sum += j;
    }
    printf("case %d:sum=%d.\n",i,sum);

  }
  return 0;
}

/**************************************************************
	Problem: 1145
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

