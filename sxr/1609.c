#include <stdio.h>
#include <stdlib.h>

int chseq(char ch)
{
    if(ch<='z'&&ch>='a')

        return ch-'a'+1;
    else if(ch<='Z'&&ch>='A')
        return ch-'A'+1;
    return 0;
}

int output(char ch, int n)
{
    if(n%10==1)
        printf("%c is %dst character.",ch,n);
    else if(n%10==2)
        printf("%c is %dnd character.",ch,n);
    else if(n%10==3)
        printf("%c is %drd character.",ch,n);
    else
        printf("%c is %dth character.",ch,n);
    return 0;
}


int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

/**************************************************************
	Problem: 1609
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

