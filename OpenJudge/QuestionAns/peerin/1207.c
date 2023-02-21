#include<stdio.h>
int cac(int M){
  int sum = 0;
  for(int i = 100;i<=999;++i){
    if(i%M==0&&(i/100!=i%10&&i/100!=(i%100)/10&&i%10!=(i%100)/10))
      sum += i;

  }
  return sum;
}


int main(){
  int M;
  int i = 0;
  while(scanf("%d",&M)!=EOF){
    i++;
    printf("case %d:%d\n",i,cac(M));

  }



  return 0;
}

/**************************************************************
	Problem: 1207
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

