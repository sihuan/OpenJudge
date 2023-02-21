#include <stdio.h>


int main(){
  int a[3];
  for(int i = 0;i < 3;i++){
    scanf("%d",&a[i]);    
  }
  for(int i = 0;i < 3;i++){
    for(int j = i;j < 3;j++){
      if(a[j]<a[i]){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
    }
    }

  }
  printf("%d %d %d",a[0],a[1],a[2]);
  return 0;
}

/**************************************************************
	Problem: 1018
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

