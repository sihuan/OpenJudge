#include <stdio.h>
/* int find(int list[],int num,int begin,int len,int result[],int count){ */

/*   for(int i = begin;i < len;++i){ */
/*     if(list[i]==num){ */
/*       result[count++]==i; */
/*     } */

/*   } 



     }*/

int main(){

  int n;
  scanf("%d",&n);
  int list[n];
  for(int i = 0;i < n;++i){

    scanf("%d",list+i);

  }
  int num;
  while(scanf("%d",&num)!=EOF){
    
    int number = 0;
    for(int i = 0;i < n;++i){
      if(list[i]==num)number++;
    }
    int flag = 0;
    int count = 0;
    for(int i = 0;i < n;++i){
      if(list[i]==num){
	flag = 1;
	count++;
	if(count != number)
	  printf("%d ",i+1);
	else
	  printf("%d\n",i+1);
      }
    }
    if(flag == 0){
      printf("NOT FOUND\n");
    }
  }
  
  return 0;
}

/**************************************************************
	Problem: 1462
	User: 202211070518
	Language: C
	Result: Accepted
	Time:88 ms
	Memory:748 kb
****************************************************************/

