#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char inp[1001],store[1001];
    int len,max=0,temp,i;
    while(gets(inp)!=NULL)
    {
        len=strlen(inp);
        if(max<len)
        {
            max=len;
            strcpy(store,inp);
        }
    }
    len=strlen(store);
    for(int j=0; j<len; j++)
    {
        if(store[j]>='a'&&store[j]<='z')
            store[j]=store[j]-32;
    }
    puts(store);
}

/**************************************************************
	Problem: 1854
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

