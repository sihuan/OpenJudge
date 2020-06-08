#include <stdio.h>
#include <math.h>


    int digits(int n){
      if(n==0)
    return 1;
   int i=0;
while(n!=0){
    n=n/10;
    i++;
    }
    return i;
    }

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

