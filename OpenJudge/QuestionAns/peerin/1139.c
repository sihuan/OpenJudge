#include <stdio.h>
#define MAX_STR_LEN 101

char ch_abs(char num){
  return num>0?num:-num;
}

int str_cmp(char s1[],char s2[]){
  int idx = 0;
  while(1){
    char d = s1[idx]-s2[idx];
    if(!(ch_abs(d)=='a'-'A'||d==0))return d;
    if(s1[idx]=='\0'&&s2[idx]=='\0') return 0;
    idx++;
  }
}



int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1139
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

