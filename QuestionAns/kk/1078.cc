#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <malloc.h>
#include <iostream>

using namespace std;

typedef struct users
{
    char name[21];
    char answer[21];
    int threshold;
    int lenth;
}USE;
USE getInf(int m)
{
    USE people;
    scanf("%s",people.name);
    people.lenth=strlen(people.name);
    getchar();
    for(int i=0;i<m;i++)
    {
        people.answer[i]=getchar();
        getchar();
    }
    scanf("%d",&people.threshold);
    return people;
}
void match(USE owner,USE others[],int n,int m,int order,int max)
{
    char success[n][21];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(i==order)
            continue;
        int same=0;
        for(int j=0;j<m;j++)
        {
            if(owner.answer[j]==others[i].answer[j])
                same++;
        }
        if(same>=owner.threshold)
        {
            strcpy(success[flag],others[i].name);
            flag++;
        }
    }
    cout << owner.name;
    for(int i=0;i<max-strlen(owner.name);i++)
        putchar(' ');
    putchar(':');
    if(!flag)
    {
        puts("NONE!");
        return ;
    }
    for(int i=0;i<flag;i++)
    {
        if(i>0)
            printf(",%s",success[i]);
        else
            printf("%s",success[i]);
    }
    printf("\n");
}
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    USE people[n];
    for(int i=0;i<n;i++)
    {
        people[i]=getInf(m);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(people[i].lenth>max)
            max=people[i].lenth;
    }
    for(int i=0;i<n;i++)
    {
        match(people[i],people,n,m,i,max);
    }
}

/**************************************************************
	Problem: 1078
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

