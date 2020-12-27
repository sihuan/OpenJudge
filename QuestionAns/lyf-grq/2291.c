#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char k;
    int count = 0;
    int x;
    scanf("%s %c", &str, &k);
    x=strlen(str);
    for (int i = 0; i < x; i++)
        if (str[i] == k)
            count++;
    printf("%d", count);
}
/**************************************************************
	Problem: 2291
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

