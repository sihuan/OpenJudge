#include <stdio.h>

int add(int N){
  if(N<=0){
    return 0;
  }
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",a+b);
  add(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

