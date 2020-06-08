#include <stdio.h>
#include <stdlib.h>
int is_daffodil(int n) {
int a,b,c;
a=n/100;
b=(n-a*100)/10;
c=n-a*100-b*10;

if(n==a*a*a+b*b*b+c*c*c&&n>=100&&n<=999)
return 1;
else
return 0;
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

