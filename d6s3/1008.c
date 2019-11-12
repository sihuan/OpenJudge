#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    a = abs(a);
    b = fabs(b);
    printf("%d\n%g",a,b);
}

/**************************************************************
	Problem: 1008
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

