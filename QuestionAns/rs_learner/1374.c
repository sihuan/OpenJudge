#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,result;
    char a[100];
    gets(a);
    i=strlen(a);
    for(j=0;j<=i-1;j++)
    {
        if(a[j]>='A'&&a[j]<='Z')
                a[j]='Z'-(a[j]-'A');
        else if(a[j]>='a'&&a[j]<='z')
                a[j]='z'-(a[j]-'a');
        else
            continue;
    }
    for(j=0;j<=i-1;j++)
    {
        printf("%c",a[j]);
    }
    return 0;
}
/**************************************************************
	Problem: 1374
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

