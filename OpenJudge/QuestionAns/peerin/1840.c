#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int n) {
  if(n<=1) return false;
  if(n==2||n==3) return true;
  for (int i = 2; i < n; ++i) {
    if(n%i==0) return false;
 }
  return true;
}

int main(int argc, char *argv[])
{
  int n;
  char word[101] = {0};
  scanf("%d", &n);
  for (int i = 0; i<n; ++i) {
    scanf("%s",word);
    int len = strlen(word);
    char table[26] = {0};
    for (int j = 0; j < len; ++j) {
      table[word[j]-'a']++;
    }
    int maxn=-1;
    int k;
    int mp;
    for (k = 0; k<26; ++k) {
      if (table[k] > maxn) {
        maxn = table[k];
	mp=k;
      }
    }
    int minn=101;
    bool flag=false;
    for (k = 0; k<26; ++k) {
      if (table[k] < minn && table[k] != 0) {
        minn = table[k];
        flag = true;
      }
    }
    if(!flag) minn=0;
    int num=maxn-minn;
    //    printf("%d\n",num);
    if (isprime(num)) {
      printf("Lucky Word\n%d\n",num);
    } else {
      printf("No Answer\n0\n");
    }
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

