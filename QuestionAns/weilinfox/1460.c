#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>

int main()
{
    int a[10005];
    int i, n;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    while (scanf("%d", &i)==1) {
        int j;
        int p=-1;
        for (j=0; j<n; j++) {
            if (a[j]==i) {
                p=j+1;
            }
        }
        if (p>0)
            printf("%d\n", p);
        else
            printf("NOT FOUND\n");

    }



    return 0;
}

/**************************************************************
	Problem: 1460
	User: 201901060401
	Language: C
	Result: Accepted
	Time:40 ms
	Memory:748 kb
****************************************************************/

