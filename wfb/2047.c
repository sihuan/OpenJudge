#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1005
#define MAX_LENGTH 30005

char src[MAX_LENGTH];
char input[MAX_LENGTH];
char output[MAX_LENGTH];
char ans[MAX_LENGTH];
int isIn(char s,int length)
{
    int i;
    for(i=0; i<length; ++i)
        if(ans[i] == s) return 1;
    return 0;
}
int main()
{
    gets(src);
    int i,length;
    char *pi,*po,*p;
    while(gets(input) != NULL)
    {
        pi = input;
        po = output;
        length = 0;
        for(i=0; src[i]; ++i)
        {
            if(src[i] == '-') continue;
            if(*pi == '-') ++pi;
            else if(src[i] != *pi)
            {
                *po++ = src[i];
            }
            else pi++;
        }
        *po = 0;
        for(p = output; p<po; ++p)
        {
            if(*p>='a' && *p<='z') *p += 'A'-'a';
            if(isIn(*p,length) == 0)
                ans[length++] = *p;
        }
        ans[length] = 0;
        puts(ans);
    }
    return 0;
}

/**************************************************************
	Problem: 2047
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:864 kb
****************************************************************/

