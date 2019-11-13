#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define swap(a,b,t) t=a;a=b;b=t;

char sentence[1005];

int getCnt()
{
    char *p;
    int cnt=0;
    int preIsWord = 0;
    for(p=sentence; *p!='\0'; ++p)
    {
        if(!ispunct(*p) && !isspace(*p))
        {
            if(!preIsWord)
            {
                 ++cnt;
                preIsWord = 1;
            }
        }
        else preIsWord = 0;
    }
    return cnt;
}
int main()
{
    while(gets(sentence) != NULL)
    {
        printf("%d\n",getCnt());
    }
    return 0;
}

/**************************************************************
	Problem: 1169
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

