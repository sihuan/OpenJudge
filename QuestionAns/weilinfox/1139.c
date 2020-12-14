#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 105

int strlen (char* ch)
{
    int i;
    for (i=0; ch[i]!='\0'; i++) ;
    return i;
}

char change (char ch)
{
    if (ch>='A' && ch<='Z') {
        return ch+'a'-'A';
    } else {
        return ch;
    }
}

int str_cmp(char s1[], char s2[])
{ /*若s1==s2，返回0；若s1<s2，返回值是负数；若s1>s2，返回值是正数。若返回值不为0，返回的数值始终是s1和s2中第一个不相同位置的字符ASCII码值之差*/
    int i=0;
    int len;
    len=strlen(s1)>strlen(s2)?strlen(s2):strlen(s1);
    while (change(s1[i])==change(s2[i]) && i<=len)
        i++;
    if (i>len)
        return 0;
    else
        return s1[i]-s2[i];

}

int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1139
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

