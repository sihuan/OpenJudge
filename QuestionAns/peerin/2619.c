#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  int m[10][10];
  scanf("%d",&n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d",&m[i][j]);
    }
  }
  int p,q,r,s;
  while(scanf("%d%d%d%d",&p,&q,&r,&s)!=EOF){
    int sum=0;
    for (int i = p; i<=r; ++i) {
      for (int j = q; j <= s; ++j) {
	sum += m[i][j];
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}


/**************************************************************
	Problem: 2619
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

