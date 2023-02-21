#include <stdio.h>

int main(){
  char a[50],b[50];
  int i2 = 0;
  int zero_flag = 0;
  scanf("%s",a);
  for(int i = 0;i < 50;i++){
    if(a[i]=='0'&&zero_flag==0){
      zero_flag = 1;
      ;
    }else if(a[i]=='\0'){
      b[i2] = a[i];
      break;
    }
    else if(a[i]=='('||a[i]==')'||a[i]=='-'){
      ;
    }
    else{
      b[i2] = a[i];
      i2++;
    }
  }
  printf("0086%s",b);  
  return 0;
}

/**************************************************************
	Problem: 1014
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

