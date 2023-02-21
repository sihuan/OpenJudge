#include <stdio.h>


int is_daffodil(int n){
  if(n<100||n>=1000)return 0;

  int gw = n%10;
  int sw = (n/10)%10;
  int bw = (n/100);
  if(n == gw*gw*gw+sw*sw*sw+bw*bw*bw){

    return 1;

  }else return 0;





}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
/**************************************************************
	Problem: 1278
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

