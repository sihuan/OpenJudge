#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        puts("yes");
    else
        puts("no");
    return 0;
}

/**************************************************************
	Problem: 1347
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

