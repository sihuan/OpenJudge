#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 101
#define MAX_LEN 1000

int main(int argc,char *argv[]){

  char a[MAX_LEN][MAX_STR_LEN];
  int n;
  scanf("%d",&n);
  for(int i = 0;i < n;++i){
    scanf("%s",a[i]);
  }
  char s[MAX_STR_LEN];
  while(scanf("%s",s) != EOF){
    int flag = 0;
    for(int i = 0;i < n;++i){
      if(!strcmp(s,a[i])){
	printf("Yes\n");
	flag = 1;
	break;
      }
    }
    if(flag == 0)
      printf("No\n");
  }


  return 0;
}

/**************************************************************
	Problem: 2043
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:772 kb
****************************************************************/

