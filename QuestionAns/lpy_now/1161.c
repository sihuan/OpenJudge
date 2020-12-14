#include<stdio.h>

int main(){
    char ch;
    int n;
    ch=getchar();
    scanf("%d",&n);
    ch=(char)(ch+n);
    if(ch>'Z'){
        ch=(char)(ch-26);
    }
    putchar(ch);
    return 0;
}

/**************************************************************
	Problem: 1161
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

