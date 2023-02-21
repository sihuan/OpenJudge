#include <stdio.h>

int main(){

  int array[101]={0};
  int score;
  while(scanf("%d",&score)!=EOF){
    if(score>=0&&score<=100)
    array[score]++;

  }
  int max = 0;
  for(int i = 0;i<=100;++i){

    if(array[i]>max){

      max = array[i];
      
    }
    
  }

  for(int i = 0;i<=100;++i){

    if(array[i]==max){
      printf("%d\n",i);
    }

  }
  
  return 0;
}

/**************************************************************
	Problem: 1178
	User: 202211070518
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

