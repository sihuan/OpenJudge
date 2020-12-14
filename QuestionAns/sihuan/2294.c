#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

double div(int a,int b){
    return (double)a/(double)b;
}
//以上 submit

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %lg\n", a, b, div(a, b));
    return 0;
}

/**************************************************************
	Problem: 2294
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

