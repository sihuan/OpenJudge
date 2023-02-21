#include <stdio.h>
int find_number(int m,int n){
  int MAX = 10000;
  int temp;
  for(int i = 1;i<MAX;++i){
    temp = m*i;
    for(int j = 1;j<MAX;++j){
      if(n*j > temp)
	break;
      if(temp == n*j)
	return temp;

    }
  }
}

int main(){
  int k,m,n;
  int res[101];
  int count = 0;
  scanf("%d%d%d",&k,&m,&n);
  int m_n = m%n==0 ? m : n%m==0 ? n : find_number(m,n);
  //  printf("%d\n",m_n);
  for(int i = 1;i<=k;++i){
    if((i%m==0||i%n==0)&&(i%m_n!=0)){
      res[count] = i;
      count++;
    }
  }
    for(int i = 0;i < count;++i){
      printf("%d",res[i]);
      if(i != count-1)
	printf(" ");

    
  }

  return 0;
}

/**************************************************************
	Problem: 1019
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

