#include <stdio.h>
int judge(int m){
  if(m == 0)return 0;
  for(int i = 2;i<m;++i){
    
    if(m%i==0){return 0;}


  }

  return 1;
}

int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  printf("=====\n");
  for(int i = n;m<=i;--i){
    if(i!=1&&judge(i)==1){printf("%d\n",i);}



  }
  printf("=====\n");

  return 0;
}

/**************************************************************
	Problem: 1027
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

