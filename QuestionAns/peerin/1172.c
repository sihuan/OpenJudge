#include <stdio.h>
#include <string.h>

int rev(char s[]){
  int len = 100;
  char s1[100]={0};
  int numcount = 0;
  for(int i = 0;i < len;++i){
    if(s[i]!=0)numcount++;  
  }

  for(int i = 0;i<numcount;++i){
    s1[numcount-1-i]=s[i];
  }
  for(int i = numcount;i<len;++i){
    if(i==len-1){
      s1[i]=0;
    }else
      s1[i]='0';
  }
  //s
  //12'\0'---
  //s1
  //21'\0'
  //210------
  strcpy(s,s1);
  //memcpy(s,s1,100);
  return numcount;
}

int cac_rec(char *s1,int s1_numcount,char *s2,int s2_numcount,int count,int jw){
  int num1 = s1[0]-'0';
  int num2 = s2[0]-'0';
  int sum = num1+num2+jw;
  if(sum == 0&&s1_numcount<=0&&s2_numcount<=0){
    return count;
  }else{
    jw = sum/10;
  
    return cac_rec(s1+1,s1_numcount-1,s2+1,s2_numcount-1,jw?count+1:count,jw);
  }
}

int cac(char *s1,char *s2){
  int s1_numcount = rev(s1);
  int s2_numcount = rev(s2);
  return cac_rec(s1,s1_numcount,s2,s2_numcount,0,0);
}

int main(){
  char s1[100]={0};
  char s2[100]={0};
  while(scanf("%s%s",s1,s2)!=EOF){
    printf("%d\n",cac(s1,s2));
    memset(s1,0,100);
    memset(s2,0,100);
        
  }
  return 0;
}


/**************************************************************
	Problem: 1172
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

