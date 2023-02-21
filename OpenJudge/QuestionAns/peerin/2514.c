#include <stdio.h>

#define MATRIX_CACULATE(m1, m2, i, j,n, m3)			\
  for (int i_tmp = 0; i_tmp < (n); ++i_tmp) {			\
    (m3)[(i)][(j)]+=(m1)[(i)][i_tmp]*(m2)[i_tmp][(j)];		\
}

int main(int argc, char *argv[])
{
  int m,n,p;
  int m1[100][100],m2[100][100],m3[100][100];
  scanf("%d%d%d",&m,&n,&p);
  for (int i = 0; i<m; ++i) {
   for (int j = 0; j<n; ++j) {
     scanf("%d",&m1[i][j]);
   }
  }
  for (int i = 0; i<n; ++i) {
   for (int j = 0; j<p; ++j) {
     scanf("%d",&m2[i][j]);
   }
  }
  for (int i = 0; i<m; ++i) {
    for (int j = 0; j<p; ++j) {
      MATRIX_CACULATE(m1, m2, i, j,n, m3);
    }
  }
  for (int i = 0; i<m; ++i) {
   for (int j = 0; j<p; ++j) {
     if(j==0)
       printf("%d",m3[i][j]);
     else
       printf(" %d",m3[i][j]);
   }
   printf("\n");
  }
  return 0;
}


/**************************************************************
	Problem: 2514
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:792 kb
****************************************************************/

