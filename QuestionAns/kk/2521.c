#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char first[260],second[260];
    gets(first);
    int n,i;
    n=strlen(first);
    for(i=0;i<n;i++)
    {
        if(first[i]=='A')
            second[i]='T';
        else if(first[i]=='T')
            second[i]='A';
        else if(first[i]=='G')
            second[i]='C';
        else if(first[i]=='C')
            second[i]='G';
    }
    second[n]=0;
    puts(second);
}


/**************************************************************
	Problem: 2521
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

