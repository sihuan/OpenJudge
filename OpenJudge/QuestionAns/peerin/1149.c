#include <stdio.h>
#include <string.h>


int main(){

  int n;
  scanf("%d",&n);
  int i;
  getchar();
  for(i = 0;i<n;++i){

    char input[1001]={0};
    gets(input);
    printf("case %d:length=%d.\n",i+1,strlen(input));

  }

  return 0;
}

/**************************************************************
	Problem: 1149
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

