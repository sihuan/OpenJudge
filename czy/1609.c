#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

int chseq(char ch)
{
    if(ch>='A'&&ch<='Z') return ch-'A'+1;
    if(ch>='a'&&ch<='z') return ch-'a'+1;
}

void output(char ch,int n)
{
    int x=n%10;
    if(x==1) printf("%c is %dst character.",ch,n);
    else if(x==2) printf("%c is %dnd character.",ch,n);
    else if(x==3) printf("%c is %drd character.",ch,n);
    else printf("%c is %dth character.",ch,n);
}


int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

