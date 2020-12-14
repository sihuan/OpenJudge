#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st,ed;
    scanf("%c %c",&st,&ed);
    int i;
    for(i=st+1; i<ed; ++i)
    {
        putchar(i);
    }
    putchar('\n');
    puts("***END***");

    return 0;
}

/**************************************************************
	Problem: 1239
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

