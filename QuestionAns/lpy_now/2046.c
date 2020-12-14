#include<stdio.h>

char cnvchar(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+32;
    }
    if(ch>='a' && ch<='z'){
        return ch-32;
    }
}

int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
/**************************************************************
	Problem: 2046
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

