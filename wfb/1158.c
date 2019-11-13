#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
void reverse(char s[])
{
    char temp;
    int l = strlen(s);
    int i;
    for(i=0; i<l/2; ++i)
    {
        SWAP(s[i],s[l-i-1],temp);
    }
}
void PrintF(int x,int n)
{
    char s[6];
    int i = 0;
    int y;
    while(1)
    {
        y = x%n;
        if(y<10) s[i++] = y+'0';
        else s[i++] = y+'a'-10;
        x /= n;
        if(!x) break;
    }
    s[i] = 0;
    reverse(s);
    if(n == 8)
        printf("%-5s",s);
    else if(n==10)
        printf("%-7s",s);
    else if(n==16)
        printf("%s",s);
}
void Print(int x)
{
    PrintF(x,8);
    putchar(' ');
    PrintF(x,10);
    putchar(' ');
    PrintF(x,16);
    putchar('\n');
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    puts("Octal Decimal Hexadecimal");
    Print(m);
    Print(n);

    return 0;
}

/**************************************************************
	Problem: 1158
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

