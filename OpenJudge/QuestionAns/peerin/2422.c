#include <stdio.h>

int main(int argc, char *argv[])
{
  unsigned long long n;
  while(scanf("%llu",&n)!=EOF){
    int res=0;
    for (unsigned long long i = n;i>=1; --i) {
      if (i % 5 == 0) {
	int cnt=0;
	int num = i;
        while (num % 5 == 0) {
          num /= 5;
	  cnt++;
        }
        res+=cnt;
      }
    }
    printf("%d\n",res);
  }
  return 0;
}



/**************************************************************
	Problem: 2422
	User: 202211070518
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

