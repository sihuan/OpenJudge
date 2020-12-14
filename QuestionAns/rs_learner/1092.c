#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char s[100];
    scanf("%s",&s);
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1092
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

