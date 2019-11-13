#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define swap(a,b,t) t=a;a=b;b=t;

void GetSs(char **ss,int n)
{
    int i;
    char temp[100005];
    for(i=0; i<n; ++i)
    {
        gets(temp);
        int l = strlen(temp);
        ss[i] = (char *)malloc((l+1)*sizeof(char));
        strcpy(ss[i],temp);
    }
}
void Sort(char** ss,int n)
{
    int i,j;
    char *temp;
    int isExchange;
    for(i=0; i<n-1; ++i)
    {
        isExchange = 0;
        for(j=0; j<n-1-i; ++j)
        {
            if(strcmp(ss[j],ss[j+1]) > 0)
            {
                swap(ss[j],ss[j+1],temp);
                isExchange = 1;
            }

        }
        if(! isExchange) break;
    }
}
void Print(char **ss,int n)
{
    int i;
    for(i=0; i<n; ++i)
        puts(ss[i]);
}
int main()
{
    char* *ss;
    int n;
    scanf("%d",&n);
    getchar();
    ss = (char* *)malloc(sizeof(char *)*n);
    GetSs(ss,n);
    Sort(ss,n);
    Print(ss,n);
    return 0;
}

/**************************************************************
	Problem: 1334
	User: 201601011420
	Language: C
	Result: Accepted
	Time:6432 ms
	Memory:1352 kb
****************************************************************/

