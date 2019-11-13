#include <stdio.h>
#include <string.h>
#define MAX 105
#define MAX_STR_LEN 15

#define SWAP(a,b,t) strcpy(t,a); strcpy(a,b); strcpy(b,t);
void ReadStrs(char s[][MAX_STR_LEN],int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        gets(s[i]);
    }
}
void Sort(char s[][MAX_STR_LEN],int n)
{
    int i,j;
    int l1,l2;
    char temp[MAX_STR_LEN];
    for(i=0; i<n-1; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            l1 = strlen(s[i]);
            l2 = strlen(s[j]);
            if(l1 > l2 || l1==l2 && strcmp(s[i],s[j]) > 0)
            {
                SWAP(s[i],s[j],temp);
            }
        }
    }
}
void PrintS(char s[][MAX_STR_LEN],int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        puts(s[i]);
    }
}
int main()
{
    char strs[MAX][MAX_STR_LEN];
    int n;
    scanf("%d",&n);
    getchar();
    ReadStrs(strs,n);
    Sort(strs,n);
    PrintS(strs,n);
    return 0;
}

/**************************************************************
	Problem: 1247
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

