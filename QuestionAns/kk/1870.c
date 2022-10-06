#include<stdio.h>
int main()
{
    int n,i,j;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++,ch=ch+2)
    {
        for(j=1;j<=n-2*i+1;j++)
            printf("%c",' ');
        for(j=1;j<=2*i-1;j++,ch++)
            printf("%c",ch);
        ch=ch-2;
        j=j-2;
        for(;j>0;j--,ch--)
            printf("%c",ch);
        printf("\n");
    }
    ch=ch-2;
    for(i=(n+1)/2-1;i>0;i--)
    {
        for(j=1;j<=n-2*i+1;j++)
            printf("%c",' ');
        for(j=1;j<=2*i-1;j++,ch++)
            printf("%c",ch);
        ch=ch-2;
        j=j-2;
        for(;j>0;j--,ch--)
            printf("%c",ch);
        printf("\n");
    }

}
/**************************************************************
	Problem: 1870
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

