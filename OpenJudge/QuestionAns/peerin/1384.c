#include<stdio.h>
int jc(int n){
  if(n<=1){
    return 1;
  }else{
    return n*jc(n-1);
  }


}



int main(){
  int n;
  scanf("%d",&n);
  printf("%d",jc(n));

  return 0;
}

/**************************************************************
	Problem: 1384
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

