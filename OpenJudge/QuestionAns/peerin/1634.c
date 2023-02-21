#include <stdio.h>
#include <string.h>
#define MAX_LINE 100
#define MAX_ROW 100

void getMatrix(int ma[MAX_LINE][MAX_ROW],int m,int n){

  for(int i = 0;i < m;++i)
    for(int j = 0;j < n;++j)
      scanf("%d",&ma[i][j]);
  
}

void putMatrix(int ma[MAX_LINE][MAX_ROW],int m,int n){

  for(int i = 0;i < m;++i){
    for(int j = 0;j < n;++j){
      if(j == 0)
	printf("%d",ma[i][j]);
      else
	printf(" %d",ma[i][j]);
    }
    printf("\n");
  }
}

void lineSwitch(int ma[MAX_LINE][MAX_ROW],int line1,int line2,int n){

  int tmp[MAX_ROW];
    
  for(int j = 0;j < n;++j)
    tmp[j] = ma[line1][j];

  for(int j = 0;j < n;++j)
    ma[line1][j] = ma[line2][j];

  for(int j = 0;j < n;++j)
    ma[line2][j] = tmp[j];


  
}


void rowSwitch(int ma[MAX_LINE][MAX_ROW],int row1,int row2,int m){

  int tmp[MAX_LINE];
    
  for(int j = 0;j < m;++j)
    tmp[j] = ma[j][row1];

   for(int j = 0;j < m;++j)
    ma[j][row1] = ma[j][row2];

  for(int j = 0;j < m;++j)
    ma[j][row2] = tmp[j];

  
}


int main(int argc,char *argv[]){

  int m,n;
  int ma[MAX_LINE][MAX_ROW];
  scanf("%d%d",&m,&n);
  getMatrix(ma,m,n);
  //int maB[MAX_LINE][MAX_ROW];
  // memcpy(maB,ma,MAX_LINE * MAX_ROW * sizeof(int));
  char choice[10];
  int c1,c2;
  while(scanf("%s%d%d",choice,&c1,&c2) != EOF){
    if(!strcmp(choice,"line"))
      lineSwitch(ma,c1,c2,n);
    else if(!strcmp(choice,"row"))
      rowSwitch(ma,c1,c2,m);
    putMatrix(ma,m,n);
    printf("\n");
    //memcpy(ma,maB,MAX_LINE * MAX_ROW * sizeof(int));
  }

  return 0;
}

/**************************************************************
	Problem: 1634
	User: 202211070518
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

