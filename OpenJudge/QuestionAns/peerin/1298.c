#include <stdio.h>
int gcd(int m,int n){
  if(m==0)
    return n;
  else if(n==0)
    return m;
  else if(m%n==0){
    return n;
  }else{
    return gcd(n,m%n);
  }
}
int lcm(int m,int n){
  return m/gcd(m,n)*n;
}

int main(){

  int m,n;
  scanf("%d%d",&m,&n);
  printf("%d %d",gcd(m,n),lcm(m,n));
}

/**************************************************************
	Problem: 1298
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

