#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1010];
    int l;
    while (gets(ar) != NULL) {
        l = strlen(ar);
        if (ar[l - 1] % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
}
/**************************************************************
	Problem: 2036
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

