#include <stdio.h>
#include <string.h>

static int str_cnt(char a[], char b[], int cnt){
  int alen = strlen(a);
  int blen = strlen(b);
  int not_equal = 0;
  if(blen < alen) return cnt;
  for(int i = 0;i < alen;++i){
    if(b[i] != a[i]){
      not_equal = 1;
      break;
    }
  }
  if(not_equal){
    return str_cnt(a, b + 1, cnt);
  }
  else{
    return str_cnt(a, b + 1, cnt + 1);
  }
}

static void proceed(void){
  char a[11];
  char b[1001];
  scanf("%s", a);
  scanf("%s", b);
  printf("%d\n", str_cnt(a, b, 0));
}

int main(int argc,char *argv[]){

  int n;
  scanf("%d", &n);
  for(int i = 0;i < n;++i){
    proceed();
  }

  return 0;
}



/**************************************************************
	Problem: 1837
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

