#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[1001],c[1001];
    int a,max=0,temp,i;
    while(gets(s)!=NULL)
    {
        a=strlen(s);
        if(max<a)
        {
            temp=max;
            max=a;
            a=temp;
            strcpy(c,s);
        }
    }
    i=strlen(c);
    for(int j=0;j<i;j++)
    {
        if(c[j]>='a'&&c[j]<='z')
            c[j]=c[j]-'a'+'A';
    }
    puts(c);
    return 0;
}
/**************************************************************
	Problem: 1854
	User: 201901060203
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

