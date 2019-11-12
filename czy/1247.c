#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 200
char a[300][300];

int sort1(int n)
{
    int i=0,j;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            int l1=strlen(a[j]);
            int l2=strlen(a[j+1]);
            if(l1>l2)
            {
                char temp[200];
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
            if(l1==l2 && strcmp(a[j],a[j+1])>0)
            {
                char temp[200];
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}

int main()
{

    int n;
    scanf("%d",&n);
    int i;
    getchar();
    for(i=0;i<n;++i)
    {
        scanf("%s",a[i]);
    }
    sort1(n);
for(i=0;i<n;++i)
    {
        puts(a[i]);
    }
}

/**************************************************************
	Problem: 1247
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:836 kb
****************************************************************/

