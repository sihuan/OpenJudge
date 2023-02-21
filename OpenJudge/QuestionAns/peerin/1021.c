#include <stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int a[N],b[N];
  for(int i =0 ;i<N;i++){
    scanf("%d %d",a + i,b + i);
  }
  for(int i = 0;i < N;i++){
    printf("%d\n",a[i]+b[i]);

  }
  return 0;
}

/**************************************************************
	Problem: 1021
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

