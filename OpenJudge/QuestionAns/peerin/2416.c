#include <stdio.h>
#include <stdbool.h>

#define CHECK_POINT(i,j,m,n) (i==0||j==0||i==m-1||j==n-1?true:false)

void print(int m, int n) {
  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n; ++j) {
      if(CHECK_POINT(i, j, m, n))
	printf("*");
      else
	printf(" ");
    }
    printf("\n");
  }
}


int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

