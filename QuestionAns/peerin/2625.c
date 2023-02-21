#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc,char *argv[]){

  int n;
  int i,ji;
  while(scanf("%d", &n) != EOF){
    i = 0;
    ji = 0;
    while(1){
      if(pow(2, i) <=n) i++;
      else break;
    }
    i--;
    for(;i >= 0;i--){
      if(n-pow(2, i)>=0){
	n = n - pow(2,i);
	ji++;
      }
    }
    printf("%d\n",ji);
  }

  return 0;
}

/**************************************************************
	Problem: 2625
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:760 kb
****************************************************************/

