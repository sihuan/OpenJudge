#include <stdio.h>

int main(){

  long long n;
  scanf("%lld",&n);
  long long i;
  for(i = 0;i < n;++i){
    long long p,q;
    scanf("%lld%lld",&p,&q);
    
   long long j;
  long long temp = p;  
if(p>=q){
  p = q;
  q = temp;
 }
for(j = p;j<=q;++j){
      printf("%lld",j);
      if(j!=q)printf(" ");
    }

    
    
 if(i!=n-1)printf("\n\n");
 else ;
	     
 

  }
  

}

/**************************************************************
	Problem: 1168
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

