#include <stdio.h>
int max_rec(int max,int count){
  int n;
  if(scanf("%d",&n)==EOF){
    printf("%d %d",count,max);
  }
  else{
    if(n>max){
      max_rec(n,count+1);
    }
    else{
      max_rec(max,count+1);
    }
  }
  


}
int main(){
  int first_n,count;
  count = 0;
if(scanf("%d",&first_n)!=EOF){
    max_rec(first_n,count+1);
  }
  else{
    printf("0 0");
  }
  
  return 0;
}

/**************************************************************
	Problem: 2602
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

