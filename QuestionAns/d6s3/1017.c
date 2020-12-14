#include <stdio.h>
#include <string.h>
int main()
{
    char c1[30],c2[30];
    gets(c1);
    gets(c2);
    if (strlen(c1) >= strlen(c2))
        printf("%s\n%s\n",c1,c2);
    else
        printf("%s\n%s\n",c2,c1);
}
/**************************************************************
	Problem: 1017
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

