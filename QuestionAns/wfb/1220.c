#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define swapN(a,b,t) t=a; a=b; b=t;
#define swapC(a,b,t) strcpy(t,a); strcpy(a,b); strcpy(b,t);
#define swapP(a,b,t) swapN(a.aver,b.aver,t.aver); swapC(a.score,b.score,t.score); swapC(a.name,b.name,t.name);
typedef struct
{
      int score[10];//选手的10个得分，得分与评委一一对应
      double aver;//选手的平均分
      char name[81];//选手的姓名
} Choice;
int inputChoice(Choice peo[],int M,int N)
{
    int i,j;
    int sum,min,max;
    for(i=0; i<M; ++i)
    {
        sum = 0;
        min = INT_MAX;
        max = INT_MIN;
        scanf("%s",peo[i].name);
        for(j=0; j<N; ++j)
        {
            scanf("%d",&peo[i].score[j]);
            if(peo[i].score[j] > max) max=peo[i].score[j];
            if(peo[i].score[j] < min) min=peo[i].score[j];
            sum += peo[i].score[j];
        }
        peo[i].aver = (sum-max-min)*1.0/(N-2);
    }
}

int sort(Choice peo[],int M,int N)
{
    int i,j,k;
    Choice temp;
    for(i=0; i<M-1; ++i)
        for(j=i+1; j<M; ++j)
            if(peo[i].aver < peo[j].aver)
        {
            swapP(peo[i],peo[j],temp);
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

