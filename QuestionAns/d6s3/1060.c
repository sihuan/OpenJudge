#include <stdio.h>
#include <string.h>

void std(char a[])
{
    char tmp[1001];
    int b = strlen(a);
    for (int i = 0; i < 1000 - b; i++)
        tmp[i] = '0';
    for (int i = 1000 - b, j = 0; i < 1000; i++, j++) {
        tmp[i] = a[j];
    }
    tmp[1000] = '\0';
    strcpy(a, tmp);
}

int cmp(char a[], char b[])
{
    int i;
    for (i = 0; a[i] == b[i]; i++)
        ;
    return a[i] > b[i];
}

void prt(char a[])
{

    int i;
    for (i = 0; a[i] == '0'; i++)
        ;
    if (a[i] == '\0')
        printf("0");
    else
        for (; i < 1000; i++)
            printf("%c", a[i]);
    printf("\n");
}

int main()
{
    char ar[1000][1001];
    int max = 0, min = 0;
    gets(ar[0]);
    std(ar[0]);
    for (int n = 1; gets(ar[n]); n++) {
        std(ar[n]);
        if (cmp(ar[n], ar[max])) {
            max = n;
        } else if (!cmp(ar[n], ar[min])) {
            min = n;
        }
    }

    printf("The maximum value is : ");
    prt(ar[max]);
    printf("The minimum value is : ");
    prt(ar[min]);
}
/**************************************************************
	Problem: 1060
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1652 kb
****************************************************************/

