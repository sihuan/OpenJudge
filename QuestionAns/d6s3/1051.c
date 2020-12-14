#include <stdio.h>

int main()
{
    int ar[1000] = { 0 };
    int n, i, a, j = 0, h, m=0,b=1,c;
    scanf("%d",&n);
    while (b++<=n) {
        c=0;
        while(scanf("%d", &a)&&a!=0){ 
            ar[c] += a;
            c++;
        }
        if (c > m)
            m = c;
        j++;
        if (j == 2) {
            for (i = 0; i < m; i++)
                if (i == 0)
                    printf("%d", ar[i]);
                else
                    printf(" %d", ar[i]);
            printf("\n");
            j = 0;
            m = 0;
            for (h = 0; h < 1000; h++)
                ar[h] = 0;
        }
    }
    if (j == 1) {
        for (i = 0; i < c; i++)
            if (i == 0)
                printf("%d", ar[i]);
            else
                printf(" %d", ar[i]);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1051
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

