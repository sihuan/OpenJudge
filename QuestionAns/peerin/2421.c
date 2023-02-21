#include <stdio.h>

int main(){

  int num[15]={0};

  for(int i = 0;i<15;++i){

    scanf("%d",num+i);
    
  }

  int max = num[0];
  for(int i = 0;i<15;++i){

    if(num[i]>max){
      max = num[i];
    }
    
  }

  int max2;
    for(int i = 0;i<15;++i){

      if(num[i]!=max){
	max2=num[i];
	break;
      }
    
  }

      for(int i = 0;i<15;++i){

	if(num[i]>max2&&num[i]<max)max2=num[i];
    
  }


      printf("%d",max2);

  
  return 0;
}

/**************************************************************
	Problem: 2421
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

