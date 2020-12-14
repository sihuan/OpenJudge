#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    printf("%d %d",b+c,b-c>0?b-c:c-b);
    return 0;



}
/**************************************************************
	Problem: 2117
	User: 201801020908
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

