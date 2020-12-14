#include <stdio.h>
#include<math.h>
#include<string.h>
#define MAX_STR_LEN 200

int revs(char *s)
{
    int l=strlen(s);
    int i;
    for(i=0;i<l/2;++i)
    {
        char temp;
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    return 0;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

