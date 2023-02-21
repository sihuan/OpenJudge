#include <stdio.h>

int find(int list[],int num,int len){

  for(int i = len-1;i >= 0;--i){
    if(list[i]==num)return i+1;
  }
  return -1;
}



int main(){

  int n;
  scanf("%d",&n);
  int list[n];
  for(int i = 0;i<n;i++){

    scanf("%d",list+i);
    

  }
  int num;
  while(scanf("%d",&num)!=EOF){

    int res = find(list,num,n);
    if(res==-1){
      printf("NOT FOUND\n");
    }else{
      printf("%d\n",res);
    }

  }
}

/**************************************************************
	Problem: 1460
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

