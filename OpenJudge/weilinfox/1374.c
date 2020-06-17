#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n;
    int i, j;
    char ch;
    int c[1005];
    char to(char ch);

    while ((ch=getchar())!='\n' && ch!=EOF) {
        putchar(to(ch));
    }

    return 0;
}

char to (char c)
{
    int a;
    if (isupper(c)) {
        a=c-'A'+1;
        return 'A'+26-a;
    } else if(islower(c)) {
        a=c-'a'+1;
        return 'a'+26-a;
    } else {
        return c;
    }

}

/**************************************************************
	Problem: 1374
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

