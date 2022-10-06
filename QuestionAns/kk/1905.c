#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %c %d =",&a,&c,&b);
    (c=='+')?printf("%d %c %d = %d",a,c,b,a+b):printf("%d %c %d = %d",a,c,b,a-b);

}
/**************************************************************
	Problem: 1905
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

