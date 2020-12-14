#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100

int str2(char a[], int base)
{
    int l = strlen(a);
    int i = 0, n = 1, sum = 0;
    for (i = l - 1; i >= 0; --i) {
        if (a[i] >= '0' && a[i] <= '1') {
            sum = sum + (a[i] - '0') * n;
            n = n * base;
        }
    }
    if (a[0] == '-')
        sum = sum * -1;
    return sum;
}

int str8(char a[], int base)
{
    int l = strlen(a);
    int i = 0, n = 1, sum = 0;
    for (i = l - 1; i >= 0; --i) {
        if (a[i] >= '0' && a[i] <= '7') {
            sum = sum + (a[i] - '0') * n;
            n = n * base;
        }
    }
    if (a[0] == '-')
        sum = sum * -1;
    return sum;
}

int str10(char a[], int base)
{
    int l = strlen(a);
    int i = 0, n = 1, sum = 0;
    for (i = l - 1; i >= 0; --i) {
        if (a[i] >= '0' && a[i] <= '9') {
            sum = sum + (a[i] - '0') * n;
            n = n * base;
        }
    }
    if (a[0] == '-')
        sum = sum * -1;
    return sum;
}

int str16(char a[], int base)
{
    int l = strlen(a);
    int i = 0, n = 1, sum = 0;
    {
        for (i = l - 1; i >= 0; --i) {
            if (a[i] >= '0' && a[i] <= '9') {
                sum = sum + (a[i] - '0') * n;
                n = n * base;
            }
            if (a[i] == 'a' || a[i] == 'A') {
                sum = sum + 10 * n;
                n = n * base;
            }
            if (a[i] == 'b' || a[i] == 'B') {
                sum = sum + 11 * n;
                n = n * base;
            }
            if (a[i] == 'c' || a[i] == 'C') {
                sum = sum + 12 * n;
                n = n * base;
            }
            if (a[i] == 'd' || a[i] == 'D') {
                sum = sum + 13 * n;
                n = n * base;
            }
            if (a[i] == 'e' || a[i] == 'E') {
                sum = sum + 14 * n;
                n = n * base;
            }
            if (a[i] == 'f' || a[i] == 'F') {
                sum = sum + 15 * n;
                n = n * base;
            }
        }
        if (a[0] == '-')
            sum = sum * -1;
        return sum;
    }
}

int strToInt(char a[], int base)
{
    int l = strlen(a);
    if (l == 0)
        return 0;
    if (base == 2)
        return str2(a, base);
    if (base == 8)
        return str8(a, base);
    if (base == 10)
        return str10(a, base);
    if (base == 16)
        return str16(a, base);
}

int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

