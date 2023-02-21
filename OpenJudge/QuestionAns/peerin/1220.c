#include <stdlib.h>
#include <stdio.h>

typedef struct{
  int score[10];//选手的10个得分，得分与评委一一对应
  double aver;//选手的平均分
  char name[81];//选手的姓名
}Choice;

void inputChoice(Choice peo[],int m,int n){
  for(int i = 0;i < m;++i){
    scanf("%s",peo[i].name);
    int max = 0,min = 100,res = 0;
    for(int j = 0;j < n;++j){
      scanf("%d",&peo[i].score[j]);
      if(peo[i].score[j] > max){
	max = peo[i].score[j];
      }
      if(peo[i].score[j] < min){
	min = peo[i].score[j];
      }
      res += peo[i].score[j];
    }
    //printf("%s max:%d,min:%d\n",peo[i].name,max,min);
    peo[i].aver = (res - max - min)/((n - 2) * 1.0);
  }
}

int choiceCmp(const void * n1,const void * n2){
  Choice * p1 = (Choice *)n1;
  Choice * p2 = (Choice *)n2;
  return -(p1->aver - p2->aver);
}

void sort(Choice peo[],int m,int n){
  qsort(peo,m,sizeof(Choice),choiceCmp);
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

