#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k;
    char inp[101];
    while(gets(inp))
    {
        i=0,j=strlen(inp)-1;
        while(isspace(inp[i]))
            i++;
        while(isspace(inp[j]))
            j--;
        for(k=i; k<=j; k++)
            printf("%c",inp[k]);
        printf("\n");
        if((j-i==2)&&inp[i]=='E'&&inp[i+1]=='N'&&inp[i+2]=='D')
            break;
    }
}

/**************************************************************
	Problem: 1094
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

