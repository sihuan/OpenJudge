#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <ctype.h>

int lent[26]={3,2,1,2,3,3,2,3,3,2,2,1,2,2,1,2,2,2,1,2,1,1,1,2,2,1};

typedef struct Strs
{
    char str[11];
    int len;
}STR;

int main()
{
//    freopen("in.txt","r",stdin);
    STR str[100];
    int j=0;
    while(scanf("%s",str[j].str)!=EOF)
    {
        getchar();
        j++;
    }
    j--;
    for(int i=0;i<=j;i++)
    {
        str[i].len=0;
        int s=0;
        while(str[i].str[s]!=0)
        {
            str[i].str[s]=tolower(str[i].str[s]);
            str[i].len+=lent[str[i].str[s]-'a'];
            if(s==0)
                str[i].str[s]=toupper(str[i].str[s]);
            s++;
        }
    }
    STR temp;
    for(int k=0;k<j;k++)
        for(int t=0;t<j-k;t++)
        {
            if(str[t].len>str[t+1].len)
            {
                temp=str[t];
                str[t]=str[t+1];
                str[t+1]=temp;
            }
            if(str[t].len==str[t+1].len)
                if(strcmp(str[t].str,str[t+1].str)>0)
                {
                    temp=str[t];
                    str[t]=str[t+1];
                    str[t+1]=temp;
                }
        }
    for(int k=0;k<=j;k++)
    {
        if(k)
            printf(" %s",str[k].str);
        else
            printf("%s",str[k].str);
    }
}

/**************************************************************
	Problem: 2538
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

