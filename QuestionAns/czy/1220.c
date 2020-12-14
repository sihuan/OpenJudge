#include "stdio.h"
#include "string.h"
#include "math.h"

typedef struct
{
      int score[10];//选手的10个得分，得分与评委一一对应
      double aver;//选手的平均分
      char name[81];//选手的姓名
} Choice;
int inputChoice(Choice peo[],int M,int N);
int sort(Choice peo[],int M,int N);

int inputChoice(Choice peo[],int M,int N)
{
    int n=M,m=N;
   // scanf("%d%d",&n,&m);
    int i,j;
    for(i=0;i<n;++i)
    {
        scanf("%s",&peo[i].name);
        double sum=0;
        for(j=0;j<m;++j)
        {
            scanf("%d",&peo[i].score[j]);
            sum=sum+peo[i].score[j];
        }
        int max=peo[i].score[1],min=peo[i].score[1];
        for(j=0;j<m;++j)
        {
            if(max<peo[i].score[j]) max=peo[i].score[j];
            if(min>peo[i].score[j]) min=peo[i].score[j];
        }
        peo[i].aver=(sum-max-min)/(m-2);
    }
}

int sort(Choice peo[],int M,int N)
{
    int i,j;
    for(i=0;i<M-1;++i)
    {
        for(j=0;j<M-i-1;++j)
        {
            if(peo[j].aver<peo[j+1].aver)
            {
                Choice a;
                a=peo[j];
                peo[j]=peo[j+1];
                peo[j+1]=a;
            }
        }
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

