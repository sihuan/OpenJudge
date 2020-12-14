#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 105

int palindrome (char s[], int begin, int end)
{
    if(end==1)
    {
        if(s[begin]==s[end])
            return 1;
        else return 0;
    }
    if(begin==end||begin==end-1)
        return 1;
    else if((s[begin]==s[end]&&begin<end))
    {
        if(palindrome(s, begin+1, end-1))
            return 1;
        else
            return 0;
    }
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

