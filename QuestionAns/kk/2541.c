#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

void print(int n)
{
    if(n==0)
    {
        printf("\n");
        return;
    }
    printf("*");
    print(n-1);


}
void printTriangle(int n)
{
    if(n==0)
        return;
    print(n);
    printTriangle(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
/**************************************************************
	Problem: 2541
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

