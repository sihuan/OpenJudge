#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    while(scanf("%c", &a) != EOF) {
        printf("%d\n", toupper(a)-'A'+1 );
    }
}

/**************************************************************
	Problem: 2411
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

