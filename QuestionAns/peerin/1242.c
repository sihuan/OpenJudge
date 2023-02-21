#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned int conv(char input[]){

  unsigned int input_len = strlen(input);

  unsigned int result = 0;
  
  for(int i = input_len-1;i >= 0;--i){
    //0101   4    4-(3+1)
    //   
    result += (input[i]-'0')*(int)pow(2.0,(input_len-(i*1.0+1)));
    //printf("%u\n",result);

  }

  return result;

}


int main(){

  char input[33]={0};
  while(scanf("%s",&input)!=EOF){

    printf("%u\n",conv(input));


  }

  return 0;
}

/**************************************************************
	Problem: 1242
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

