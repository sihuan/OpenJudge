#include <stdio.h>
int cac(int n){
  if(n == 0){
    return 1;
  }
  else if(n<0){
    return 0;
  }
  else{

    return cac(n-1)+cac(n-2);

  }
}
void sp(){
  int n;
  if(scanf("%d",&n)!=EOF){
    printf("%d\n",cac(n));
    sp();
  }
  

}
int main(){
  sp();
  

}

/**************************************************************
	Problem: 2599
	User: 202211070518
	Language: C
	Result: Accepted
	Time:60 ms
	Memory:748 kb
****************************************************************/

