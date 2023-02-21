#include <stdio.h>
int sum_rec(int sum,int k,int n){
  if(k==1){
    return sum+n;
  }
  else{
    int next_n;
    scanf("%d",&next_n);
    sum += n;
    return sum_rec(sum,k-1,next_n);

  }

}
int main(){

  int k ;
  scanf("%d",&k);
  int first_n;
  scanf("%d",&first_n);
  int sum = 0;
  sum = sum_rec(0,k,first_n);
  printf("%d",sum);

  return 0;
}

/**************************************************************
	Problem: 1764
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

