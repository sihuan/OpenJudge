#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 12

int strToInt(char s[]){
  int negFlag = 0;
  int len = strlen(s);
  if(len == 0) return 0;
  int i;
  for(i = 0;i < len;++i){
    if(i == 0){
      if(!(s[i] >= '0' && s[i] <= '9')){
	if(s[i] == '+') negFlag = 0;
	else if(s[i] == '-') negFlag = 1;
	else return 0;
      }
    }
    else{
      if(!(s[i] >= '0' && s[i] <= '9')) return 0;
      else break;
    }
  }
  int beg = 0;
  for(i = 0;s[i] != '\0';++i){
    if(s[i] >= '0' && s[i] <= '9'){
      beg = i;
      break;
    }
  }
  int res = 0;
  int count = 0;
  for(i = beg;s[i] >= '0' && s[i] <= '9' && s[i] != '\0';++i){
    if(s[i] == '0' && i == beg){
      beg++;
      continue;
    }
    count++;
  }
  // printf("count:%d\nbeg:%d\n",count,beg);
  for(i = beg;(i - beg) < count;++i){
    res += pow(10,count - (i - beg) - 1) * (s[i] - '0');
  }
  return negFlag == 1?-res:res;
}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
/**************************************************************
	Problem: 1134
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

