#include <stdio.h>
#include <string.h>

int main()
{
    char s[11];
    int pos;
    scanf("%s%d",s,&pos);
    int n = strlen(s);
    int i;
    if(pos>n || pos<1)
        printf("error");
    else
        putchar(s[pos-1]);
    putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 1253
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

