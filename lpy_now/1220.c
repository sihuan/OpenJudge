#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int score[10];//选手的10个得分，得分与评委一一对应
    double aver;//选手的平均分
    char name[81];//选手的姓名
}Choice;
int inputChoice(Choice peo[],int M,int N)//输入名字和分数
{
    int i,j;
    for (i=0; i<M; i++)
    {
        scanf("%s",peo[i].name);
        for (j=0; j<N; j++)
        {
            scanf("%d",&peo[i].score[j]);
        }
 
    }
    return 0;
}
int sort(Choice peo[],int M,int N)
{
    int j,i,temp,k,sum=0;
    for (k=0; k<M; k++)//冒泡排序法
    {
        for (i=0; i<N-1; i++)
        {
            for (j=0; j<N-i-1; j++)
            {
                if (peo[k].score[j]>peo[k].score[j+1])
                {
                    temp=peo[k].score[j];
                    peo[k].score[j]=peo[k].score[j+1];
                    peo[k].score[j+1]=temp;
                }
            }
        }
 
    }
    for (i=0; i<M; i++)
    {
        for (j=1; j<N-1; j++)
        {
            sum+=peo[i].score[j];
        }
        peo[i].aver=(double)sum/(N-2);//制类型转换使得两边数据类型相同
        sum=0;
    }
    Choice pr;
    for (i=0; i<M-1; i++)
    {
        for (j=0,k=0; j<M-i; j++,k++)
        {
            if(peo[k].aver<peo[k+1].aver)
            {
                pr=peo[k];//整个结构体中的成员都进行交换
                peo[k]=peo[k+1];
                peo[k+1]=pr;
            }
        }
    }
   return 0;
 
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

