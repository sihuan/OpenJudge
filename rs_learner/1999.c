#include<stdio.h>
int operate(int a,int b,char c)
{
    if(c=='+')
        return(a+b);
    if(c=='-')
        return(a-b);
    if(c=='*')
        return(a*b);
    if(c=='/')
        return(a/b);
}

int main()
{
    int a, b;
    char c;
    while (scanf("%d %c %d", &a, &c, &b) != EOF)
        printf("%d %c %d = %d\n", a, c, b, operate(a, b, c));
    return 0;
}
/**************************************************************
	Problem: 1999
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

