#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int number[n];
  
  for(int i = 0;i < n;++i){
    scanf("%d",&number[i]);
  }
  int max = number[0];
  int min = number[0];
  
  for(int i = 0;i < n;++i){
    if(number[i]>=max)
      max = number[i];
    if(number[i]<=min)
      min = number[i];
    
  }
  printf("The maximum number is %d.\nThe minimum number is %d.",max,min);
  return 0;
}

/**************************************************************
	Problem: 1024
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

