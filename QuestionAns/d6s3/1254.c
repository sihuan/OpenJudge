#include <stdio.h>

int main()
{
    int xs, km, i, j, k;
    char xsm[51][10], kmm[12][10], lj[200];
    double cj[51][11] = { 0 }, sum[51] = { 0 }, avg[11] = { 0 };
    double a, s;
    scanf("%d %d", &xs, &km);
    for (i = 0; i <= km; i++)
        scanf("%s", kmm[i]);
    for (i = 0; i < xs; i++) {
        scanf("%s", xsm[i]);
        for (j = 0; j < km; j++) {
            scanf("%lf", &a);
            cj[i][j] = a;
            sum[i] += a;
        }
    }
    for (i = 0; i < km; i++) {
        s = 0;
        for (j = 0; j < xs; j++)
            s += cj[j][i];
        avg[i] = (s / xs);
    }
    printf("%-8s", kmm[0]);
    for (i = 1; i <= km; i++)
        printf("%7s", kmm[i]);
    printf("    sum\n");
    for (i = 0; i < xs; i++) {
        printf("%-8s", xsm[i]);
        for (j = 0; j < km; j++)
            printf("%7.1lf", cj[i][j]);
        printf("%7.1lf\n", sum[i]);
    }
    printf("average ");
    for (i = 0; i < km; i++)
        printf("%7.1lf", avg[i]);
}
/**************************************************************
	Problem: 1254
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

