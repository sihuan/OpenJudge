#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#define MAX_STR_LEN 101
#define POSITIVE 1
#define NEGATIVE 0

int strToUpper(char s[]){

  int i;
  for(i = 0;s[i] != '\0';++i){
    s[i] = toupper(s[i]);
  }
  return i;
}

int ishex(int c){

  if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))
    return 1;
  else
    return 0;

}

int isbin(int c){

  if(c >= '0' && c <= '1')
    return 1;
  else
    return 0;

}

int isoct(int c){

  if(c >= '0' && c <= '7')
    return 1;
  else
    return 0;

}

int isdec(int c){
  if(c >= '0' && c <= '9')
    return 1;
  else
    return 0;
}

int (*(retOp(int base)))(int){
  switch(base){
  case 2:
    return isbin;
    break;
  case 8:
    return isoct;
    break;
  case 10:
    return isdec;
    break;
  case 16:
    return ishex;
    break;
  default:
    return NULL;
  }
}

void conv(char s[],int len){

  int i;
  for(i = 0;i < len;++i){
    switch(s[i]){
    case '1':
      s[i] = 1;
      break;
    case '2':
      s[i] = 2;
      break;
    case '3':
      s[i] = 3;
      break;
    case '4':
      s[i] = 4;
      break;
    case '5':
      s[i] = 5;
      break;
    case '6':
      s[i] = 6;
      break;
    case '7':
      s[i] = 7;
      break;
    case '8':
      s[i] = 8;
      break;
    case '9':
      s[i] = 9;
      break;
    case '0':
      s[i] = 0;
      break;
    case 'A':
      s[i] = 10;
      break;
    case 'B':
      s[i] = 11;
      break;
    case 'C':
      s[i] = 12;
      break;
    case 'D':
      s[i] = 13;
      break;
    case 'E':
      s[i] = 14;
      break;
    case 'F':
      s[i] = 15;
      break;
    default:
      ;
    }
  }
}

int strToIntCustome(char s[],int (*op)(int),int base){
  int i,count = 0,res = 0;
  char ch;
  char s2[MAX_STR_LEN] = {0};
  for(i = 0;(ch = s[i]) != '\0';++i){
    if(op(ch)){
      s2[count++] = ch;
    }
  }
  conv(s2,count);
  for(i = 0;i < count;++i){
    res += pow(base,count - i - 1) * s2[i];
  }
  return res;
}

int strToInt(char s[],int base){
  int len  = strToUpper(s),symFlag = POSITIVE;
  int i;
  char s2[MAX_STR_LEN] = {0};
  if(s[0] == '-') symFlag = NEGATIVE;
  if(s[0] == '+') symFlag = POSITIVE;
  if(s[0] == '-' || s[0] == '+') memcpy(s2,s + 1,MAX_STR_LEN - 1);
  else memcpy(s2,s,MAX_STR_LEN);
  int (*op)(int) = retOp(base);
  int res = strToIntCustome(s2,op,base);
  return symFlag == POSITIVE ? res : -res; 
}


int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

