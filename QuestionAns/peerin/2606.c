#include <stdio.h>
int digit_num(int n,int count){

  if(n<10 && n>0){

    return count;

  }
  else{

    return digit_num(n/10,count+1);
    
  }

}

int digit(int n, int k){
  if(k == 1){
    return n%10;
  }
  else{
    return digit(n/10,k-1);
  }
  



}



int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  
  int num = digit_num(n,1);
  k = num+1 - k;
  printf("%d",digit(n,k));

  return 0;
}








/**************************************************************
	Problem: 2606
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

