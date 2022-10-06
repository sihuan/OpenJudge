#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sieve(char instr[],char justr[])
{
    int len,j=0;
    len=strlen(instr);
    for(int i=0; i<len; i++)
        if(isalnum(instr[i]))
        {
            justr[j]=instr[i];
            j++;
        }
    len=strlen(justr);
    for(int i=0;i<len;i++)
        if(isalpha(justr[i]))
            justr[i]=tolower(justr[i]);
}
int judge(char justr[])
{
    int len;
    len=strlen(justr);
    for(int i=0,j=len-1;i<=j;i++,j--)
        if(justr[i]!=justr[j])
            return 0;
    return 1;
}
int main()
{
    char instr[1002],justr[1002];
    while(gets(instr)!=NULL)
    {
        sieve(instr,justr);
        if(judge(justr))
            printf("Yes.\n");
        else
            printf("No.\n");
        memset(instr,'\0',sizeof(instr));
        memset(justr,'\0',sizeof(justr));
    }
}

/**************************************************************
	Problem: 1061
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

