#include <string.h>
#include <stdio.h>
#define MAX_LINE 100
#define MAX_COLUMN 100
int mN[MAX_LINE][MAX_COLUMN];

int getMatrix(int m[][MAX_COLUMN], int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &m[i][j]);
        }
    }
    return 0;
}

int revMatrix(int m[][MAX_COLUMN], int l, int c) {
    
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < l; ++j) {
            mN[i][j] = m[j][i];
        }
    }
   
    return 0;
}

int putMatrix(int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j == 0)
                printf("%d", mN[i][j]);
            else
                printf(" %d", mN[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char* argv[]) {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int l, c;
        scanf("%d%d", &l, &c);
        int m[MAX_LINE][MAX_COLUMN];
        getMatrix(m, l, c);
        revMatrix(m, l, c);
        putMatrix( c, l);
        if (i != n - 1)
            printf("\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1053
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:784 kb
****************************************************************/

