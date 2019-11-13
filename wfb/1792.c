#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;

void Print(int n)
{
    int x,y;
    char ch;
    for(y=1-n; y<n; ++y)
    {
        for(x=1-n; x<n; ++x)
        {
            ch = abs(x)+abs(y)+'0';
            if(abs(x)+abs(y)<n)
            {
                if(x == 0 || y==0)
                    putchar('1');
                else putchar(ch);
            }
            else putchar(' ');
        }
        putchar('\n');
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
}

/**************************************************************
	Problem: 1792
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

