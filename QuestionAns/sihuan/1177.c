#include<stdio.h>
int main()
{
    int a[2000], b[2000], c[2000], d[2000], e[2000];
    int i = 0, j = 0, z = 0, l = 0, m = 0, o;
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n<60 && n >= 0)
        {
            e[m] = n;
            m++;
        }
        else if (n<70 && n >= 60)
        {
            d[l] = n;
            l++;
        }
        else if (n<80 && n >= 70)
        {
            c[z] = n;
            z++;
        }
        else if (n<90 && n >= 80)
        {
            b[j] = n;
            j++;
        }
        else if (n <= 100 & n >= 90)
        {
            a[i] = n;
            i++;
        }
    }
    printf("Excellent : %d\n", i);
    if (i != 0)
    {
        for (o = 0; o<i - 1; o++)printf("%d, ", a[o]);
        printf("%d\n", a[i - 1]);
    }
    printf("Good : %d\n", j);
    if (j != 0)
    {
        for (o = 0; o<j - 1; o++)printf("%d, ", b[o]);
        printf("%d\n", b[j - 1]);
    }
    printf("Average : %d\n", z);
    if (z!= 0)
    {
        for (o = 0; o<z - 1; o++)printf("%d, ", c[o]);
        printf("%d\n", c[z - 1]);
    }
    printf("Pass : %d\n", l);
    if (l != 0)
    {
        for (o = 0; o<l - 1; o++)printf("%d, ", d[o]);
        printf("%d\n", d[l - 1]);
    }
    printf("Failing : %d\n", m);
    if (m != 0)
    {
        for (o = 0; o<m - 1; o++)printf("%d, ", e[o]);
        printf("%d\n", e[m - 1]);
    }
}


/**************************************************************
	Problem: 1177
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

