#include <stdio.h>
#include <string.h>
int chuli(char input[]){
  int index = 0,flag = 0;
  int len = strlen(input);
  //printf("%d\n",len);
  for(int i = 0;i<len;++i){
    if(input[i]!='0'){
      index = i;
      flag = 1;
      break;
    }
    // printf("%c\n",input[i]);
  }
  if(flag == 0){
    index = len-1;
  }
  // 00123'/0' 6
  //      
  char result[1001]={0};
  strcpy(result,input+index);
  strcpy(input,result);
  //  printf("%d\n%s\n",index,input);
  return 1;

}

int biggerp(char s1[],char s2[]){
  int s1_len = strlen(s1);
  int s2_len = strlen(s2);
  if(s1_len>s2_len){
    return 1;
  }
  else if(s1_len == s2_len){
    if(s1[0]>s2[0]){
      return 1;

    }
    else if(s1[0]==s2[0]){
      if(s1[0]=='\0'&&s2[0]=='\0'){
	return 0;
      }else{
	return biggerp(s1+1,s2+1);
      }
    }
    else{
      return 0;
    }

  }
  else{
    return 0;
  }
}
  
int equalp(char s1[],char s2[]){
  return strcmp(s1,s2)==0?1:0;
}

int lessp(char s1[],char s2[]){

  return !(biggerp(s1,s2)||equalp(s1,s2))?1:0;
  

}
char max[1001] = {0};
char min[1001] = {0};

int main(){
  char input[1001]={0};
  int flag = 0;
  while(scanf("%s",input)!=EOF){
    chuli(input);
    if(flag == 0){
      strcpy(max,input);
      strcpy(min,input);
      flag = 1;
    }
   
    //printf("chuli done\n");
    if(biggerp(input,max)){
      memcpy(max,input,1001);      
    }
    //printf("biggerp done\n");
    if(lessp(input,min)){

      memcpy(min,input,1001);
    }
    memset(input,'\0',1001);
    //printf("lessp done\n");
  }
  printf("The maximum value is : %s\nThe minimum value is : %s",max,min);
  return 0;
}

/**************************************************************
	Problem: 1060
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

