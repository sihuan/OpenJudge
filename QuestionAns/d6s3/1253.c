#include<stdio.h>
#include<string.h>

int main()
{
    int k;
    char st[11];
    scanf("%s",st);
    scanf("%d",&k);
    int a=strlen(st);
    if(k<=0||k>a)
        printf("error");
    else
        printf("%c",st[k-1]);
}

/**************************************************************
	Problem: 1253
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

