#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n, m;
    int front, end;
    int i, j;
    char ch;
    int f=0;
    int a[15], b[15];
    int itoaFun(int*, int);

    while (scanf("%d%d", &n, &m)==2) {
        int len;
        int lena;
        int lenb;
        int time=0;
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        lena=itoaFun(a, n);
        lenb=itoaFun(b, m);
        if (m>n) {
            int t;
            t=m;
            m=n;
            n=t;
        }
        len=lena>lenb?lena:lenb;

        for (i=0; i<len; i++) {
            if (a[i]+b[i]>9) {
                a[i+1]++;
                time++;
            }
        }

        printf("%d\n", time);
    }





}

int itoaFun (int* a, int b)
{
    int i=0;
    while (b>0) {
        a[i++]=b%10;
        b/=10;
    }
    return i;
    /*返回位数*/
}

/**************************************************************
	Problem: 1172
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

