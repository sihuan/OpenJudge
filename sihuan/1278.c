#include<stdio.h>
int is_daffodil(int n){
if (n<100||n>999){
return 0;}
int g, s, b;
  b = n / 100;
  s = (n - b*100) / 10;
  g = n % 10;
  if (n == g * g * g + s * s * s + b * b * b) {
    return 1;
  } else {
    return 0;
  }
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

