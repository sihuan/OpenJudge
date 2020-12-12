#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    scanf("%c %c",&a, &b);
    if(a==b) printf("0 0");
    else if(a>b)
        printf("%d %d", 25-(a-b),a-b-1);
    else printf("%d %d", b-a-1, 25-(b-a));
    return 0;
}

/**************************************************************
	Problem: 1909
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

