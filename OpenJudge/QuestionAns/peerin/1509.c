#include <stdio.h>
#include <ctype.h>
int main(){
  char a;
  int list[56]={0};
  //0 digits
  //1 spacse
  //2 puncts
  //3-28 a-z
  //29-55 A-Z
  while((a = getchar())!=EOF){
    if(isdigit(a))list[0]++;
    else if(islower(a))list[3+a-'a']++;
    else if(isupper(a))list[29+a-'A']++;
    else if(isspace(a))list[1]++;
    else if(ispunct(a))list[2]++;
  }
  int sum_lower = 0;
  int sum_upper = 0;
  for(int i = 3;i<=28;++i){
    sum_lower+=list[i];
  }
    for(int i = 29;i<=55;++i){
    sum_upper+=list[i];
    
  }
  int sum = list[0]+list[1]+list[2]+sum_lower+sum_upper;

  
  printf("All Characters : %d\nLowers : %d\nUppers : %d\nDigits : %d\nSpaces : %d\nPuncts : %d\n",sum,sum_lower,sum_upper,list[0],list[1],list[2]);
  for(char c = 'A';c <= 'Z';++c){
    printf("%c : %d\n",c,list[3+c-'A']+list[29+c-'A']);
  }
  return 0;
}

/**************************************************************
	Problem: 1509
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

