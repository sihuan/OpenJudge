#include <stdio.h>

int main(){

  int n;
  scanf("%d",&n);
  if(n==0){
    printf("0");

  }
  else if(n>0){
    int i;
    for( i = 1;i<= n;++i){
      printf("%d",i);
      if(i!=n) printf(" ");



    }

  }
  else if(n<0){

    int i;
    for( i = n;i<=-1;++i){

      printf("%d",i);
  if(i!=-1) printf(" ");
  
    }

  }
}

/**************************************************************
	Problem: 1167
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

