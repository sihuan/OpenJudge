#include <stdio.h>


int main(){

  int num;
  while(scanf("%d",&num)!=EOF&&num!=0){

    printf("%d%s\n",num,num%10==1?"st":num%10==2?"nd":num%10==3?"rd":"th");


  }


}

/**************************************************************
	Problem: 1098
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

