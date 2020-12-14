#include<stdio.h>

int main(){
    int a,b;
    scanf("x = %d, y = %d",&a,&b);
    printf("x + y : %d\n",a+b);
    printf("x - y : %d\n",a-b);
    printf("x * y : %d\n",a*b);
    printf("x / y quotient: %d, remainder: %d\n",a/b,a-b*(a/b));
    printf("x ^ 2 : %d\n",a*a);
    printf("y ^ 3 : %d",b*b*b);


}

/**************************************************************
	Problem: 1002
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

