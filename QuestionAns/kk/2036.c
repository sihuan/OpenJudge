#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char inp[1002];
    while(scanf("%s",inp)!=EOF)
    {
        int len,n;
        len=strlen(inp);
        n=inp[len-1];
        if(n%2==0)
        printf("Even\n");
        else
        printf("Odd\n");
    }
}

/**************************************************************
	Problem: 2036
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

