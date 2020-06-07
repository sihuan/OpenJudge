#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 1005

int max(int a, int b)
{
    return a>b?a:b;
}

int init_seq(int seq[], int size)
{
    int i;
    for (i=0; i<size; i++) {
        seq[i]=0;
    }
    return i;
}

int get_seq(int seq[])
{
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &seq[i]);
    }
    return n;
}

int put_seq(int seq[], int size)
{
    int i;
    for (i=0; i<size; i++) {
        if (i) {
            printf(" %d", seq[i]);
        } else {
            printf("%d", seq[i]);
        }
    }
    putchar('\n');

    return i;
}

int add_seq(int sum_seq[], int add_seq[], int size)
{
    int i;
    for (i=0; i<size; i++) {
        sum_seq[i]+=add_seq[i];
    }
    return i;
}

int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;

    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
/**************************************************************
	Problem: 1249
	User: 201901060401
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

