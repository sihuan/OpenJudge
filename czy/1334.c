#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int main()
{
    int n,i,j,len;
    char *s[50001];char *str;char temp[100001];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(temp);
        len=strlen(temp);
        s[i]=(char*)malloc(len+1);
        strcpy(s[i],temp);
    }
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
         if(strcmp(s[j],s[j+1])>0)
         {
             str=s[j];
             s[j]=s[j+1];
             s[j+1]=str;
         }
    for(i=0;i<n;i++)
        {
            puts(s[i]);
            free(s[i]);
        }
}

/**************************************************************
	Problem: 1334
	User: 201601160202
	Language: C
	Result: Accepted
	Time:5916 ms
	Memory:1552 kb
****************************************************************/

