#include <stdio.h>

int add(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a==0&&b==0){
    //printf("0 0\n");
    return 0;
  }
  else{ printf("%d\n",a+b);
  add();
  }
}

int main()
{
    int N;
    add();
}

/**************************************************************
	Problem: 2598
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

