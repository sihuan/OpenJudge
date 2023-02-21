#include <stdio.h>

int digit(int n){
  if(n<10&&n>=0){
    return n;

  }
  else{

    return digit(n/10);

  }

}




int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digit(n));
}

/**************************************************************
	Problem: 2601
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

