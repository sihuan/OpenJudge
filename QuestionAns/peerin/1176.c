#include <stdio.h>

int main(){

  int m;
  scanf("%d",&m);
  for(int i = 0;i<m;++i){

    int len;
    scanf("%d",&len);
    int array[1000]={0};
    for(int j = 0;j<len;++j){
      scanf("%d",array+j);
    }
    int count=1;
    int new = array[0];
    int newarray[1000]={new,0};
    for(int j = 0;j<len;++j){
      if(array[j]!=new){
	new = array[j];
	newarray[count++]=new;
      }
    }
    for(int j = 0;j<count;++j){
      if(j!=count-1)
	printf("%d ",newarray[j]);
      else
	printf("%d\n",newarray[j]);
    }
  }

  return 0;
}

/**************************************************************
	Problem: 1176
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

