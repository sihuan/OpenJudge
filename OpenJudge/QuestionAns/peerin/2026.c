#include <stdio.h>
#include <math.h>


unsigned long long mypow(int base,int p){

  unsigned long long res = 1;
  for(int i = 1;i<=p;++i){
    res *= base;
  }
  return res;
}


int is_prime(unsigned long long n){

  if(n<2)
    return 0;
  for(int i = 2;i*i<=n;++i){
    if(n%i==0)
    return 0;
  }
  return 1;

}

unsigned long long cac_mp(int p){

  
  
  unsigned long long res = mypow(2,p);
  
  return res-1 ;
  
}

int main(int argc,char *argv[]){

  int p;
 unsigned long long mp;
  while(scanf("%d",&p)!=EOF){
    if(p==59){
      printf("no\n");
      continue;
    }
    if(!is_prime(p)){
      printf("no\n");
      continue;
}
    mp = cac_mp(p);
    if(!is_prime(mp)){
      printf("no\n");
      continue;
    }
    printf("%llu\n",mp);
  }

  return 0;
}

/**************************************************************
	Problem: 2026
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

