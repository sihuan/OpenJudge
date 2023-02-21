#include <stdio.h>


int main(){
  int n;
  scanf("%d",&n);
  printf("Sun Mon Tue Wen Thu Fri Sat\n");
  if(n!=7){

  for(int i = 0;i<(n*4);++i){
    printf(" ");


  }
  }
  int n1 = 7-n;
  for(int i = 1;i<=30;++i){
    if(i==n1||(i-n1)%7==0){
      printf("%3d\n",i);

    }
    else if(i == 30){

      printf("%3d",i);
    }
    else{

      printf("%3d ",i);
}
}
  
  return 0;
}

/**************************************************************
	Problem: 1100
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

