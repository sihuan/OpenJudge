#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,b;
    char s[1000];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(s);
        b=strlen(s);
        printf("case %d:length=%d.\n",i,b);
    }
    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

