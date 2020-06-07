#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int maxf(int m)
{
    if (m<=100)
        return 542;
    else if (m<=1000)
        return 7920;
    else if (m<=10000)
        return 104730;
    else if (m<=100000)
        return 1299710;
    else
        return 10000000;
}

int main()
{
    int i, j, k, t, max, m;
    int sta[105];
    int* a, *b;

    a=(int*)malloc(sizeof(int)*10000000);
    b=(int*)malloc(sizeof(int)*700000);
    memset(a, 0, sizeof(a));
    a[0]=1;
    a[1]=1;

    /*freopen("in.txt", "r", stdin);*/
    k=0;
    m=0;
    while (scanf("%d", &t)==1) {
        sta[k++]=t;
        if (t>m)
            m=t;
    }

    /*第m->max*/

    max=maxf(m);

    for (i=2; i<=(int)sqrt(max)+1; i++) {
        if (a[i])
            continue;
        for (j=i*2; j<=max; j+=i)
            a[j]=1;
    }
    for (i=2, j=1; i<=max; i++) {
        if (!a[i]) {
            b[j++]=i;
        }
    }

    /*printf("%d     ", b[650000]);*/





    for (i=0; i<k; i++)
        printf("%d\n", b[sta[i]]);

    /*for (i=0; i<10; i++)
        //if (!a[i])
        printf("%d\n", b[i]);
    printf("%d", k);*/





    return 0;
}


/**************************************************************
	Problem: 2303
	User: 201901060401
	Language: C
	Result: Accepted
	Time:1188 ms
	Memory:42556 kb
****************************************************************/

