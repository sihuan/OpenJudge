#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;
char t[16][5] = {"0000","0001","0010","0011","0100","0101","0110",
"0111","1000","1001","1010","1011","1100","1101","1110","1111"};
void PrintT(int n)
{
    int i;
    for(i=0; i<4; ++i)
        putchar(t[n][i]);
}
void Print(char n[])
{
    int i;
    int x;
    for(i=0; n[i]; ++i)
    {
        if(n[i]>='A' && n[i]<='F')
            x = n[i]-'A'+10;
        else x = n[i]-'0';
        PrintT(x);
    }

    putchar('\n');
}
int main()
{
    char n[105];
    while(scanf("%s",&n) != EOF)
        Print(n);
    return 0;
}

/**************************************************************
	Problem: 1637
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

