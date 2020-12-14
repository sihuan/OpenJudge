#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    char k;
    int sum = 0;
    scanf("%s %c", st, &k);
    for (int i = 0; i < strlen(st); i++)
        if (st[i] == k)
            sum++;
    printf("%d", sum);
}
/**************************************************************
	Problem: 2291
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

