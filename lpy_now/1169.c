#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[101];
    int s,i;
    while(gets(a)!=NULL)
    {
        s=0;
        for(i=0;i<strlen(a);i++)
        {
            if(isalnum(a[i])!=0&&isalnum(a[i+1])==0)
                s++;
        }
        printf("%d\n",s);
    }
}


/**************************************************************
	Problem: 1169
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

