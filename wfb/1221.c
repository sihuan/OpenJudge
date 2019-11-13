#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 105

void Print(int n)
{
    char chR = 'A';
    char chC;
    int i,j;
    for(i=-n/2; i<=n/2; ++i)
    {
        if(i<0) chC = chR++;
        else chC = chR--;
        for(j=-n/2; j<=n/2; ++j)
        {
            if(abs(i)+abs(j) <=n/2)
                putchar(chC++);
            else if(i+j>n/2 || -i+j>n/2)
                ;
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}

/**************************************************************
	Problem: 1221
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

