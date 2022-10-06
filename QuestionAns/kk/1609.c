#include<stdio.h>
#include<ctype.h>
int chseq(char ch)
{
    ch=tolower(ch);
    int n;
    n=ch-96;
    return n;
}
void output(char ch,int n)
{
    if(n%10==1)
        printf("%c is %dst character.",ch,n);
    else if(n%10==2)
        printf("%c is %dnd character.",ch,n);
    else if(n%10==3)
        printf("%c is %drd character.",ch,n);
    else
        printf("%c is %dth character.",ch,n);
}

int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

