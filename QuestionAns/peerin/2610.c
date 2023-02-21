#include <stdio.h>

typedef int (*fpp)(int ,int );
char op[5] = {'+','-','*','/','%'};

int add(int a,int b){
  return a+b;
}

int sub(int a,int b){
  return a-b;
}

int mul(int a,int b){
  return a*b;
}

int div(int a,int b){
  return a/b;
}

int mod(int a,int b){
  return a%b;
}

fpp fp[5] = {add,sub,mul,div,mod};


int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i = 0; i < 5; i++)
        printf("%d %c %d = %d\n", a, op[i], b, fp[i](a, b));
    return 0;
}

/**************************************************************
	Problem: 2610
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

