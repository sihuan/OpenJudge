#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    printf("%d %d",c+b,abs(b-c));
}
/**************************************************************
	Problem: 2117
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

