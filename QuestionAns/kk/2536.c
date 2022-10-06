#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    char ch;
    scanf("%c",&ch);
    ch=toupper(ch);
    if(ch=='Z')
        printf("Overflow");
    else
        printf("%c",ch+1);
}

/**************************************************************
	Problem: 2536
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

