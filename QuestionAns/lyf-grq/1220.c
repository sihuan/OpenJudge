#include <stdio.h>
typedef struct
{
      int score[10];//选手的10个得分，得分与评委一一对应
      double aver;//选手的平均分
      char name[81];//选手的姓名
} Choice;
int inputChoice(Choice peo[],int M,int N)
{
    int m,n;
    for(m=0;m<M;m++)
    {
      scanf("%s",peo[m].name);
      for(n=0;n<N;n++)
      {
        scanf("%d",&peo[m].score[n]);
      }
    }
}
int sort(Choice peo[],int M,int N)
{
    int i,j,min,max,k,y;
    char x;
    double sum,t;
    for(i=0;i<M;i++)
    {
        sum=0;
        min=peo[i].score[0];
        max=peo[i].score[0];
        for(j=0;j<N;j++)
        {
            sum+=peo[i].score[j];
            if(peo[i].score[j]<min)
                min=peo[i].score[j];
            if(peo[i].score[j]>max)
                max=peo[i].score[j];
        }
        peo[i].aver=(sum-max-min)/(N-2);
    }
    for(i=0;i<M-1;i++)
    {
        for(j=0;j<M-1-i;j++)
        {
            if(peo[j].aver<peo[j+1].aver)
            {
                t=peo[j].aver;
                peo[j].aver=peo[j+1].aver;
                peo[j+1].aver=t;
                for(k=0;k<81;k++)
                {
                    x=peo[j].name[k];
                    peo[j].name[k]=peo[j+1].name[k];
                    peo[j+1].name[k]=x;
                }

                for(k=0;k<N;k++)
                {
                    y=peo[j].score[k];
                    peo[j].score[k]=peo[j+1].score[k];
                    peo[j+1].score[k]=y;
                }
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

