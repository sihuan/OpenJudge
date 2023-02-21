#include <stdio.h>



int main(){

  int n;
  scanf("%d",&n);
  int list[n];
  for(int i = 0;i<n;i++){

    scanf("%d",list+i);
    

  }
  int i;
  while(scanf("%d",&i)!=EOF){
    int res = (i>=0?i:-i)>n?-1:list[i>0?i-1:n+i];
    if(res==-1){
      printf("OUT OF RANGE\n");
    }else{
      printf("%d\n",res);
    }

  }
}

/**************************************************************
	Problem: 1461
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

