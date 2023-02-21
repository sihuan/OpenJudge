#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  char a[11] = {0}, b[1001] = {0};
  for (int i = 0; i < n; ++i) {
    scanf("%s%s",a,b);
    int al = strlen(a);
    int bl = strlen(b);
    int cnt=0;
    for (int j = 0; j<bl; ++j) {
      for (int k = 0; k<al; ++k) {
	if(a[k]!=b[j+k]) goto next;
      }
      cnt++;
    next:
      ;
    }
    printf("%d\n",cnt);
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

