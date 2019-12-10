#include <stdio.h>

typedef struct
{
    int score[10]; //选手的10个得分，得分与评委一一对应
    double aver; //选手的平均分
    char name[81]; //选手的姓名
} Choice;

int inputChoice(Choice peo[], int M, int N)
{
    int i, j;
    for (i = 0; i < M; i++) {
        scanf("%s", peo[i].name);
        for (j = 0; j < N; j++)
            scanf("%d", &(peo[i].score[j]));
    }
}

int sort(Choice peo[], int M, int N)
{
    int i, j, max, min, sum;
    Choice t;
    for (i = 0; i < M; i++) {
        max = 0;
        min = 100;
        sum = 0;
        for (j = 0; j < N; j++) {
            if (peo[i].score[j] > max)
                max = peo[i].score[j];
            if (peo[i].score[j] < min)
                min = peo[i].score[j];
            sum += peo[i].score[j];
        }
        sum -= max;
        sum -= min;
        peo[i].aver = sum / (N - 2.0);
    }
    for (i = 0; i < M - 1; i++)
        for (j = i + 1; j < M; j++)
            if (peo[i].aver < peo[j].aver) {
                t = peo[j];
                peo[j] = peo[i];
                peo[i] = t;
            }
}
int main()
{
    Choice peoples[30];
    int M,N,i;
    scanf("%d%d",&M,&N);
    inputChoice(peoples,M,N);
    sort(peoples,M,N);
    for (i=0; i<3; i++)
        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
    return 0;
}
/**************************************************************
	Problem: 1220
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

