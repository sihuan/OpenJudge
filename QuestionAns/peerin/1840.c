#include <stdio.h>
#include <string.h>

static int is_prime(int n){
  if(n <= 1) return 0;
  for(long long i = 2;i * i <= n;++i){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

static int find_minn(char s[]){
  int len = strlen(s);
  char table[26] = {0};
  int minn = 100;
  for(int i = 0;i < len;++i){
    table[s[i] - 'a']++; 
  }
  for(int i = 0;i < 26;++i){
    if(table[i] < minn && table[i] != 0){
      minn = table[i];
    }
  }
  return minn;
}


static int find_maxn(char s[]){
  int len = strlen(s);
  char table[26] = {0};
  int maxn = 0;
  for(int i = 0;i < len;++i){
    table[s[i] - 'a']++; 
  }
  for(int i = 0;i < 26;++i){
    if(table[i] > maxn){
      maxn = table[i];
    }
  }
  return maxn;
}

static void proceed(void){
  char s[100];
  scanf("%s", s);
  int maxn = find_maxn(s);
  int minn = find_minn(s);
  // printf("maxn: %d minn:%d \n",maxn, minn);
  if(is_prime(maxn - minn)){
    printf("Lucky Word\n");
    printf("%d\n",maxn-minn);
  }else{
    printf("No Answer\n");
    printf("0\n");
  }
}

int main(int argc,char *argv[]){

  int n;
  scanf("%d",&n);
  for(int i = 0;i < n;++i){
    proceed();
  }

  return 0;
}

/**************************************************************
	Problem: 1840
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

