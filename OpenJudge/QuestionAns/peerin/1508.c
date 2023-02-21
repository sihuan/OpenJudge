#include <stdio.h>
#define maxlen 1000

int sort(int array[],int len){

  for(int i = 0;i<len;++i){
   
    
    for(int j = i;j<len;++j){
      if(array[j]<array[i]){
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
      }
      

    }

  }

}


int main(){
  int n;
  scanf("%d",&n);
  while(n!=0){
    
    int array[maxlen]={0};
    for(int i = 0;i<n;++i){

      scanf("%d",array+i);
      
    }

    sort(array,n);
    
    if(n%2!=0){
      printf("%d\n",array[(n+1)/2-1]);
    }
    else{
      printf("%1g\n",(array[n/2-1]+array[n/2])/2.0);
    }
    scanf("%d",&n);
  }

  return 0;
}

/**************************************************************
	Problem: 1508
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

