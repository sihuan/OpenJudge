#include <stdio.h>

char cnvchar(char c)
{
    if(c>='A' && c<='Z') return c-'A'+'a';
    if(c>='a'&&c<='z') return c-'a'+'A';
}

int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    while(~scanf("%d",&m))
    {
        sum=sum+m;
    }
    if(sum>=0) puts("No");
    else puts("Yes");

}

/**************************************************************
	Problem: 2044
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

