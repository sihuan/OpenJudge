#include <stdio.h>
typedef struct jihe{
  int beginning;
  int ending;
}jihe;
jihe find_jiaoji(struct jihe jihe1,struct jihe jihe2){
  struct jihe jiaoji;
  
  if(jihe2.ending<jihe1.beginning){
    //|_____jihe2_____|   |_____jihe1_____|
    jiaoji.beginning = 0;
    jiaoji.ending = 0;
  }
  else if(jihe2.ending<=jihe1.ending){
    if(jihe2.beginning < jihe1.beginning){
      //|_____jihe2_____|
      //    |_____jihe1_____|
      jiaoji.beginning = jihe1.beginning;
      jiaoji.ending = jihe2.ending;
    }
    else{
      //  |__jihe2__|
      //|_____jihe1_____|
      jiaoji.beginning = jihe2.beginning;
      jiaoji.ending = jihe2.ending;
    }
  }
  else if(jihe2.ending>jihe1.ending){
    if(jihe2.beginning<=jihe1.ending){
      if(jihe2.beginning>=jihe1.beginning){
      //      |_____jihe2_____|
      //|_____jihe1_____|
      jiaoji.beginning = jihe2.beginning;
      jiaoji.ending = jihe1.ending;
      }
      else{

      //|_____jihe2_____|
      //  |__jihe1__|
	jiaoji.beginning = jihe1.beginning;
	jiaoji.ending = jihe1.ending;
      }
    }
    else{
      //                 |_____jihe2_____|
      //|_____jihe1_____|
      jiaoji.beginning = 0;
      jiaoji.ending = 0;
    }
  }
  return jiaoji;
}
int main(){

  int n;
  scanf("%d",&n);
  int list[n];
  for(int i = 0;i<n;++i){
    scanf("%d",list+i);
  }
  struct jihe jihe1;
  jihe1.beginning = 1;
  jihe1.ending = n;
  struct jihe jihe2;
  while(scanf("%d%d",&jihe2.beginning,&jihe2.ending)!=EOF){
    if(jihe2.beginning>jihe2.ending){
      int temp = jihe2.beginning;
      jihe2.beginning = jihe2.ending;
      jihe2.ending = temp;
    }
    struct jihe jiaoji = find_jiaoji(jihe1,jihe2);
    if(jiaoji.beginning==0&&jiaoji.ending==0){
      printf("OUT OF RANGE\n");
      continue;
    }
    int i = jiaoji.beginning;
    int j = jiaoji.ending;
    // printf("jiaoji:%d %d\njihe1:%d %d\njihe2:%d %d",i,j,jihe1.beginning,jihe1.ending,jihe2.beginning,jihe2.ending);
    for(int temp_i = i;temp_i <= j;++temp_i){
      if(temp_i!=j){
	printf("%d ",list[temp_i-1]);
      }
      else{
        printf("%d\n",list[temp_i-1]);
      }
    }
  }
  return 0;
}

/**************************************************************
	Problem: 1468
	User: 202211070518
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:748 kb
****************************************************************/

