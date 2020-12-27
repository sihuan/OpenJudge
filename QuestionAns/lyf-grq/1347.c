#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c=getchar();
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("yes");
    else
        printf("no");
    return 0;
}

/**************************************************************
	Problem: 1347
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

