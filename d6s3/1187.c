#include <stdio.h>
#include <string.h>
int main()
{
    int m, i, j, s;
    char ar[1000];
    scanf("%d", &m);
    getchar();
    for (i = 1; i <= m; i++) {
        s = 0;
        gets(ar);
        for (j = 0; j < strlen(ar); j++) {
            s += ar[j];
        }
        if (s % 3 == 0)
            printf("Yes");
        else
            printf("No");
        if(i!=m)
            printf("\n");
    }
}
/**************************************************************
	Problem: 1187
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

