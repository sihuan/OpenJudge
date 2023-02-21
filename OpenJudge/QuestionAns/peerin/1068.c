#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX 12
char t[12][10] = {"14041","03030","13121","13131","04130","12131","12141","13030","14141","14131"};
void Print(char ch,int n)
{
    while(n--) putchar(ch);
}
void PrintRow(char s[],int i,int n)
{
    int k;
    for(k=0; s[k]; ++k)
    {
        if(k) putchar(' ');
        switch(t[s[k]-'0'][i])
        {
        case '0':
            Print(' ',n+2);
            break;
        case '1':
            putchar(' ');
            Print('-',n);
            putchar(' ');
            break;
        case '2':
            putchar('|');
            Print(' ',n+1);
            break;
        case '3':
            Print(' ',n+1);
            putchar('|');
            break;
        case '4':
            putchar('|');
            Print(' ',n);
            putchar('|');
            break;
        }
    }
    putchar('\n');
}
void Solve(char s[],int n)
{
    int i,j,k;
    PrintRow(s,0,n);
    for(j=0; j<n; ++j)
        PrintRow(s,1,n);
    PrintRow(s,2,n);
    for(j=0; j<n; ++j)
        PrintRow(s,3,n);
    PrintRow(s,4,n);
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int n;
    char s[MAX];
    while(scanf("%d %s",&n,s))
    {
        if(n == 0 && strcmp(s,"0")==0) break;
        Solve(s,n);
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1068
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

