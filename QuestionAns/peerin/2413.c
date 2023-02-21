#include <stdio.h>

int rev_print(int n,int orin){
if(n==0)return 0;
  
  int num;
  scanf("%d",&num);
  
  rev_print(n-1,orin);
  if(n!=orin)
    printf("%d ",num);
  else
    printf("%d\n",num);

  return 0;
}


int main(){

  int n;
  scanf("%d",&n);
  rev_print(n,n);

  return 0;
}

/**************************************************************
	Problem: 2413
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

