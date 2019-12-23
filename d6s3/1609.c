#include <ctype.h>
#include <stdio.h>

int chseq(char ch)
{
    return (toupper(ch) - 'A' + 1);
}

void output(char ch, int n)
{
    int np = n % 10;
    if (np == 1)
        printf("%c is %dst character.", ch, n);
    else if (np == 2)
        printf("%c is %dnd character.", ch, n);
    else if (np == 3)
        printf("%c is %drd character.", ch, n);
    else
        printf("%c is %dth character.", ch, n);
}

int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

