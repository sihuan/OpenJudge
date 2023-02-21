#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11

int strToInt(char s[]){
  if(strlen(s) == 0) return -1;
  if(!(s[0] >= '0' && s[0] <= '9')) return 0;
  int beg = 0;
  int i;
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
  return res;
}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}

/**************************************************************
	Problem: 1133
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

