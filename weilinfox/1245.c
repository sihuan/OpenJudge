
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
    int from, swap, end, n;
    int f=0;
    int i=0;
    void fun (int, int, int, int);
    while (scanf("%d%d%d%d", &n, &from, &swap, &end)==4) {
        i++;
        if (f) {
            printf("\n");
        } else {
            f=1;
        }
        printf("case %d :\n", i);
        fun(n, from, swap, end);
    }

    return 0;
}

void fun (int n, int from, int swap, int end)
{
    void fun (int, int, int, int);
    void move (int ,int ,int);

    if (n==1) {
        move(from, end, n);
    } else {
        fun (n-1, from, end, swap);
        move (from, end, n);
        fun (n-1, swap, from, end);
    }
}

void move (int from, int end, int n)
{
    printf("   plate %d : from %d to %d\n", n, from, end);
}

/**************************************************************
	Problem: 1245
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

