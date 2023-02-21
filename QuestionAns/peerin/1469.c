#include <stdio.h>
int main(){
  int list[500000]={0};
  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;++i){
    int num;
    scanf("%d",&num);
    list[num]++;
  }
  int max = 0;
  for(int i = 0;i<500000;++i){
    
    if(list[i]>max){
      max = list[i];
    }
  }
  printf("%d",max);
  return 0;
}

/**************************************************************
	Problem: 1469
	User: 202211070518
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:2628 kb
****************************************************************/

