#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 101

char arr[MAX_STR_LEN];

char * revs(char * s)
{
    int i,j;
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
        arr[j]=s[i];
    arr[j+1]='\0';
    for(i=0;i<=j;i++)
        s[i]=arr[i];
}
int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
/**************************************************************
	Problem: 1234
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

