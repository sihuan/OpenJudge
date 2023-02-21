#include <stdio.h>

int digits_rec(int n,int flag){
  

  if(n==0&&flag==0){
    return 1;
  }
  else if(n==0&&flag==1)
    return 0;
  else if(n>0){

    return 1+digits_rec(n/10,1);

  }
  else if(n<0){

    return 1+digits_rec(n/10,1);

  }



}


int digits(int n){
  return digits_rec(n,0);

}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

