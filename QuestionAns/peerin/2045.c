#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100

double * getFloatsAndAlloc(int n){
  double * sq = malloc(sizeof(double) * n);
  for(int i = 0;i < n;++i)
    scanf("%lf",sq + i);
  return sq;
}

int cmp(const void *a1,const void *a2){
  int n1 = (int)*(double *)a1;
  int n2 = (int)*(double *)a2;
  return n1 - n2;
}

void swap(double *sq1,double *sq2){
  double tmp = *sq1;
  *sq1 = *sq2;
  *sq2 = tmp;
}

void sort(double *sq,int n){
  // qsort(sq,n,sizeof(double),cmp);
  for(int i = 0;i < n;++i){
    for(int j = 0;j < n - 1;++j){
      if(cmp(sq + j,sq + j + 1) > 0)
	swap(sq + j,sq + j + 1);
    }
  }
}

void putArrayAndFree(double sq[],int n){
  for(int i = 0;i < n;++i){
    if(i == 0)
      printf("%.1lf",sq[i]);
    else
      printf(" %.1lf",sq[i]);
  }
  printf("\n");
}

int main(int argc,char *argv[]){
  int cases;
  scanf("%d",&cases);
  for(int i = 0;i < cases;++i){
    int n;
    scanf("%d",&n);
    double *sequence = getFloatsAndAlloc(n);
    sort(sequence,n);
    putArrayAndFree(sequence,n);
  }
  return 0;
}

/**************************************************************
	Problem: 2045
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

