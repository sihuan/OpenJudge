#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    unsigned long long a;
    char ar[32];
    int i, j;
    while (scanf("%s", ar) != EOF) {
        a = 0;
        for (i = 0, j = strlen(ar)-1; i < strlen(ar); i++,j--) {
            if (ar[i] == '1')
                a += pow(2, j);
        }
        printf("%llu\n", a);
    }
}
/**************************************************************
	Problem: 1242
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

