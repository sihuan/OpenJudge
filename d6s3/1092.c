#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char st[101];
    scanf("%s",st);
    int a=strlen(st);
    for(i=a-1;i>=0;i--){
        printf("%c",st[i]);
    }
}

/**************************************************************
	Problem: 1092
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

