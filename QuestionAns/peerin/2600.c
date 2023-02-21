#include <stdio.h>
int digit(int n, int k){
  if(k == 1){
    return n%10;
  }
  else{
    return digit(n/10,k-1);
  }
  



}



int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", digit(n, k));
}
/**************************************************************
	Problem: 2600
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

