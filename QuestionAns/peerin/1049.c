#include <stdio.h>
int array[1000000]={0};
int max_term(int i,int j){
  int max = array[i];
  for(int index = i;index<=j;++index){
    if(array[index]>max){
      max = array[index];
    }
  }
  return max;
}

int func(int input_beg, int input_end){
  static int caculated = 1;
  if(input_end<=caculated){
    return max_term(input_beg,input_end);
  }else{
    for(int i = caculated;i<=input_end;++i){
      int count = 0;
      unsigned int n = i;
    start:count++;
      if(n == 1){
	goto end;
      }
      else{
	if(n%2!=0){
	  n = n*3 + 1;
	  goto start;
	}
	else{
	  n = n/2;
	  goto start;
	}
     
      }
    
    end:array[i]=count;

    }
    caculated = input_end;
    return max_term(input_beg,input_end);
  }

}

int max(int i,int j){
  return i>j?i:j;
}
int min(int i,int j){
  return i<j?i:j;
}

int main(){
  array[1]=1;
  int i,j;
  while(scanf("%d%d",&i,&j)!=EOF){
    printf("%d %d %d\n",i,j,func(min(i,j),max(i,j)));
  }

  return 0;
}

/**************************************************************
	Problem: 1049
	User: 202211070518
	Language: C
	Result: Accepted
	Time:1804 ms
	Memory:4652 kb
****************************************************************/

