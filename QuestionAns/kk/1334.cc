#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>

int main()
{
//    freopen("in.txt","r",stdin);
    int n,i,j,len,fl;
    scanf("%d",&n);
    getchar();
    char **str;
    char *temp;
    char inp[100001];
    str=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        gets(inp);
        len=strlen(inp);
        str[i]=(char*)malloc(sizeof(char)*len+1);
        strcpy(str[i],inp);
        memset(inp,0,sizeof(inp));
    }
    for(i=0;i<n-1;i++)
    {
        fl=0;
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                fl=1;
            }
        }
        if(!fl)
            break;
    }
    for(i=0;i<n;i++)
    {
        puts(str[i]);
        free(str[i]);
    }
    free(str);

}

/**************************************************************
	Problem: 1334
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:6612 ms
	Memory:1408 kb
****************************************************************/

