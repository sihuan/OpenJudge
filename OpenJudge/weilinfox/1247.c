#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a, b;
    int n, m;
    int i, j;
    char sta[101][15], t[15];
    int ans;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", sta[i]);
    }

    for (i=0; i<n; i++) {
        for (j=n-1; j>0; j--) {
            if (strlen(sta[j])<strlen(sta[j-1])) {
                strcpy(t, sta[j]);
                strcpy(sta[j], sta[j-1]);
                strcpy(sta[j-1], t);
            } else if (strlen(sta[j])==strlen(sta[j-1]))
                if (strcmp(sta[j], sta[j-1])<0) {
                    /*putchar('o');*/
                    strcpy(t, sta[j]);
                    strcpy(sta[j], sta[j-1]);
                    strcpy(sta[j-1], t);
                }
        }
    }
    for (i=0; i<n; i++) {
        printf("%s\n", sta[i]);
    }

    return 0;
}

/**************************************************************
	Problem: 1247
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

