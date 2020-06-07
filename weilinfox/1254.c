#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/*name        SCI   TECH    COM  CS106  SE309  CS101    sum
    8<--     7-->*/
int main()
{
    int n, m;
    int i, j;
    char title[12][10];
    double ava[51];
    struct sta {
        char name[10];
        double score[12];
        double sum;
    } stu[51];

    scanf("%d%d", &m, &n);
    for (i=0; i<=n; i++) {
        scanf("%s", title[i]);
    }
    strcpy(title[i], "sum");
    for (i=0; i<m; i++) {
        scanf("%s", stu[i].name);
        stu[i].sum=0.0;
        for (j=0; j<n; j++) {
            scanf("%lf", &stu[i].score[j]);
            stu[i].sum+=stu[i].score[j];
        }
    }

    /*计算平均值*/
    for (i=0; i<n; i++) {
        ava[i]=0.0;
        for (j=0; j<m; j++) {
            ava[i]+=stu[j].score[i];
        }
        ava[i]/=m;
    }

    printf("%-8s", title[0]);
    for (i=1; i<=n+1; i++) {
        printf("%7s", title[i]);
    }
    putchar('\n');
    for (i=0; i<m; i++) {
        printf("%-8s", stu[i].name);
        for (j=0; j<n; j++) {
            printf("%7.1lf", stu[i].score[j]);
        }
        printf("%7.1lf\n", stu[i].sum);
    }
    printf("average ");
    for (i=0; i<n; i++) {
        printf("%7.1lf", ava[i]);
    }
    putchar('\n');

    return 0;
}

/**************************************************************
	Problem: 1254
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

