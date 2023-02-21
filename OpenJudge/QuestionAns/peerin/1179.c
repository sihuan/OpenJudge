#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* void filter(int* list,int start){ */
/*   int newlist[50000]={0}; */
/*   if(list[start]==0) ; */
/*   else{ */
/*     for(int i = 0;i<=start;++i){ */
/*       newlist[i]=list[i]; */
/*     } */
/*     int count = start+1; */
/*     for(int i = start;list[i]!=0;++i){ */
/*       if(list[i]%list[start]!=0){ */
/* 	newlist[count++]=list[i]; */
/*       } */
/*     } */
/*     for(int i = 0;i<50000;++i){ */
/*       list[i] = newlist[i]; */
/*     } */
/*     // printf("%d\n",start); */
/*   filter(list,++start); */
/*   } */
/* } */

int main(){
  int start = 0;
  int* list = calloc(500001,sizeof(int));
  for(int i = 2;i<=500001;++i){
    list[i-2]=i;
  }
  //  filter(list,0);  
  while(start<=708){ //啊哈哈啊哈哈哈哈哈哈，终于被我发现了 只要到根号下500000就好了 不用循环500000次 妈的！
    int* newlist = calloc(500001,sizeof(int));  
    //printf("%d\n",start);
    for(int i = 0;i<=start;++i){
      newlist[i]=list[i];
    }
    int count = start+1;
    for(int i = start;list[i]!=0;++i){
      if(list[i]%list[start]!=0){
	newlist[count++]=list[i];
      }
    }
    int* temp = list;
    list = newlist;
    start++;
    free(temp);
  }
  
  int m,n ;
  while(scanf("%d%d",&m,&n)!=EOF){
    for(int i = 0;list[i]!=0;++i){
      //printf("%d,",list[i]);
    }
    int flag = 0;
    for(int i = 0;list[i]!=0;++i){
      if(list[i]>=m&&list[i]<=n){
      flag = 1;
      printf("%d\n",list[i]);
      }
    }
    if(flag==1)printf("\n");
    else if(flag==0)printf("\n\n");
  }
  return 0;
}

/**************************************************************
	Problem: 1179
	User: 202211070518
	Language: C
	Result: Accepted
	Time:1072 ms
	Memory:4652 kb
****************************************************************/

