#include <stdio.h>
int ackermann_rec(int m,int n){
  if(m==0){
    return n+1;
    }
  else if(m>0 && n==0){
    return ackermann_rec(m-1,1);
  }
  else{
    return ackermann_rec(m-1,ackermann_rec(m,n-1));
  }
  
  
}
int main(){

  int m,n;
  scanf("%d %d",&m,&n);
  printf("A(%d, %d) = %d",m,n,ackermann_rec(m,n));

  return 0;
}

/**************************************************************
	Problem: 1512
	User: 202211070518
	Language: C
	Result: Accepted
	Time:1160 ms
	Memory:1292 kb
****************************************************************/

