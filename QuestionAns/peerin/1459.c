#include <stdio.h>



int find(int list[],int num,int len){

  /* if(list[len/2]==num)return list[len/2]; */
  /* else if(len==0){return -1;} */
  /* else{ */
  /*   return find(list,num,len/2); */
  /* } */


  for(int i = 0;i < len;++i){
    if(list[i]==num)return i+1;
  }
  return -1;
}



int main(){

  int n;
  scanf("%d",&n);
  int list[n];
  for(int i = 0;i<n;i++){

    scanf("%d",list+i);
    

  }
  int num;
  while(scanf("%d",&num)!=EOF){

    int res = find(list,num,n);
    if(res==-1){
      printf("NOT FOUND\n");
    }else{
      printf("%d\n",res);
    }

  }
}

/**************************************************************
	Problem: 1459
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

