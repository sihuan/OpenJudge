#include <stdio.h>
#include <stdlib.h>
int operate(int a, int b, char c)
{
int y;
switch(c)
{
case '+':
    y=a+b;
    break;
case '-':
    y=a-b;
    break;
case '*':
    y=a*b;
    break;
 case '/':
     y=a/b;
     break;
}
return y;
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

