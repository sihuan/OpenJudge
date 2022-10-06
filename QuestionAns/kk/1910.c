#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch1,ch2;
    int s,n;
    scanf("%c %c",&ch1,&ch2);
    ch1=tolower(ch1);
    ch2=tolower(ch2);
    if(ch1>ch2)
    {
        n=ch1-ch2-1;
        s=26-n-2;
    }
    if(ch2>ch1)
    {
        s=ch2-ch1-1;
        n=26-s-2;
    }
    if(ch1==ch2)
    {
        s=0;
        n=0;
    }
    printf("%d %d",s,n);


}
/**************************************************************
	Problem: 1910
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

