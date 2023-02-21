#include <stdio.h>
int multiply_recursive(int a,int b){

  if(a==0||b==0){
    return 0;
  }
  else if(a==1){
    return b;
  }
  else if(a==-1){
    return -b;
  }
  else if(b==1){
    return a;
  }
  else if(b==-1){
    return -a;
  }
  else if(a>0){
    if(b>0){
    return multiply_recursive(a,b-1)+a;
    }
    else if(b<0){
      return -multiply_recursive(a,-b);
    }
  }
  else if(a<0){
    if(b>0){
      return multiply_recursive(a,b-1)+a;
    }
    else if(b<0){
      return multiply_recursive(-a,-b);
      
    }
    
  }

}
int main(){

  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",multiply_recursive(a,b));

}

/**************************************************************
	Problem: 1212
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

