#include <stdio.h>

int CountBit(int x){
  int ret = 0;
  while(x){
    ret++;
    x &= x-1;    // 等价于 x = x & (x-1)
  }
  return ret;
}

int main(int argc, char *argv[])
{

  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  #endif
  
  int n;
  
  while (scanf("%d", &n) != EOF) {
    printf("%d\n",CountBit(n));
  }
  
  return 0;
}


/**************************************************************
	Problem: 2625
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

