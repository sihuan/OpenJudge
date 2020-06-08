
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 120
char * trim(char *s)
{
    char a[MAX_STR_LEN];
    int i,j,k,n,len;
    n=strlen(s);
    for(i=0;isspace(s[i]);i++);/*联想chq讲的：一切非0数字都是真的，只有0是假的*/
   /*isspace是一个库函数
原型：extern int isspace(int c);
用法：#include <ctype.h>
功能：判断字符c是否为空白符
说明：当c为空白符时，返回非零值，否则返回零*/
    k=i;//s[k]是第一个非空白符字符
    for(i=n-1;isspace(s[i]);i--);//s[i]是最后一个非空白符字符
    len=i-k;
    for(j=0;j<=len;j++)
    {
        a[j]=s[k+j];
    }
    a[j]='\0';
    strcpy(s,a);
    return s;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

