#include <stdio.h>

int cac(int a, int b){
  if(a<b){

    return 0;

  }
  else if(b==1){
    return a;
  }
  else if(a==1){
    return 0;
  }
  else if(a==b){
    return 1;
  }
  else if(a>b){

    return cac(a-1,b-1)+cac(a-1,b);

  }


}
int main(){

  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",cac(a,b));

}

/**************************************************************
	Problem: 2038
	User: 202211070518
	Language: C
	Result: Accepted
	Time:108 ms
	Memory:748 kb
****************************************************************/

