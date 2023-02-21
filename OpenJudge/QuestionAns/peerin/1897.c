#include <stdio.h>
#define MAX_STR_LEN 101

int palindrome(char s[],int begin,int end){

  if(begin > end)
    return 1;
  
  if(s[begin] == s[end])
    return palindrome(s,begin + 1,end - 1);
  else
    return 0;

}


int main()
{
    int len;
    char s[MAX_STR_LEN];
    scanf("%d %s", &len, s);
    if(palindrome(s, 0, len - 1))
        puts("Yes");
    else
        puts("No");
    return 0;
}
/**************************************************************
	Problem: 1897
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

