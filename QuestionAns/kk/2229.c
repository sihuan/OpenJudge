#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char ch1,ch2;
    scanf("%c %c",&ch1,&ch2);
    printf("%d",abs(tolower(ch1)-tolower(ch2)));
}

/**************************************************************
	Problem: 2229
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

