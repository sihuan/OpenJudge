#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[27],ch2[27];
    int x,y;
    gets(ch1);
    gets(ch2);
    x=strlen(ch1);
    y=strlen(ch2);
    if(x>y)
        puts(ch1),puts(ch2);
    else
        puts(ch2),puts(ch1);

    return 0;
}
/**************************************************************
	Problem: 1017
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

