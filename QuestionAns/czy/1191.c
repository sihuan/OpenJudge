#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_STR_LEN 100

struct
{
    int x;
    char name[30];
}a[12];

int g(int n)
{
    int lll;
    int flag2=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==3)
        {
            if(flag2==0)
            printf("%s",a[lll].name);
            else
                printf(",%s",a[lll].name);
            flag2=1;
        }
    }
    printf(" win ");
    int flag=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==2)
        {
            if(flag==0) printf("%s",a[lll].name);
            else printf(",%s",a[lll].name);
            flag=1;
        }
    }
    printf(".\n");
}

int g2(int n)
{
    int lll;
    int flag2=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==1)
        {
            if(flag2==0)
            printf("%s",a[lll].name);
            else
                printf(",%s",a[lll].name);
            flag2=1;
        }
    }
    printf(" win ");
    int flag=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==3)
        {
            if(flag==0) printf("%s",a[lll].name);
            else printf(",%s",a[lll].name);
            flag=1;
        }
    }
    printf(".\n");
}

int g3(int n)
{
    int lll;
    int flag2=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==2)
        {
            if(flag2==0)
            printf("%s",a[lll].name);
            else
            printf(",%s",a[lll].name);
            flag2=1;
        }
    }
    printf(" win ");
    int flag=0;
    for(lll=0; lll<n; ++lll)
    {
        if(a[lll].x==1)
        {
            if(flag==0) printf("%s",a[lll].name);
            else printf(",%s",a[lll].name);
            flag=1;
        }
    }
    printf(".\n");
}

int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;++i) scanf("%s",a[i].name);
    int k;
    for(i=0;i<m;++i)
    {
        int t[4]={0};
        for(k=0;k<n;++k)
        {
            char temp[20];
            scanf("%s",temp);
            if(strcmp(temp,"Scissors")==0) {a[k].x=1;t[1]++;}
            if(strcmp(temp,"Rock")==0) {a[k].x=2;t[2]++;}
            if(strcmp(temp,"Paper")==0) {a[k].x=3;t[3]++;}
        }
        if(t[1]>0&&t[2]>0&&t[3]>0)
        {
            puts("No winner, no loser.");
            continue;
        }
        if(t[1]==n||t[2]==n||t[3]==n)
        {
            puts("Tie.");
            continue;
        }
        if(t[1]==0) g(n);
        else if(t[2]==0) g2(n);
        else if(t[3]==0) g3(n);


    }
}

/**************************************************************
	Problem: 1191
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

