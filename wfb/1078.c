#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct
{
    char ans[105];
    int Q;
    char name[25];
    int LOfN;
} People;
typedef struct
{
    People peo[105];
    int n;
    int m;
    int Ln;
}Peoples;

void getLn(Peoples *p)
{
    int max = 0;
    int i;
    for(i=0; i<p->n; ++i)
    {
        if(max < p->peo[i].LOfN)
            max = p->peo[i].LOfN;
    }
    p->Ln = max;
}
void ReadP(Peoples *p)
{
    scanf("%d%d",&p->n,&p->m);
    int i,j;
    for(i=0; i<p->n; ++i)
    {
        scanf("%s",p->peo[i].name);
        getchar();
        p->peo[i].LOfN = strlen(p->peo[i].name);
        for(j=0; j<p->m; ++j)
        {
            scanf("%c ",&p->peo[i].ans[j]);
        }
        scanf("%d",&p->peo[i].Q);
    }
    getLn(p);
}
int isTrue(Peoples *p,int p1,int p2)
{
    int cnt = 0;
    int i,j;
    for(i=0; i<p->m; ++i)
    {
        if(p->peo[p1].ans[i] == p->peo[p2].ans[i])
            ++cnt;
    }
    if(cnt >= p->peo[p1].Q) return 1;
    else return 0;
}
void PrintAns(Peoples *p)
{
    int i,j;
    int cnt;
    for(i=0; i<p->n; ++i)
    {
        cnt = 0;
        printf("%-*s:",p->Ln,p->peo[i].name);
        for(j=0; j<p->n; ++j)
        {
            if(j==i) continue;
            if(isTrue(p,i,j))
            {
                ++cnt;
                if(cnt>1) putchar(',');
                printf("%s",p->peo[j].name);
            }
        }
        if(!cnt) puts("NONE!");
        else putchar('\n');
    }
}
int main()
{
    Peoples p;
    ReadP(&p);
    PrintAns(&p);

    return 0;
}

/**************************************************************
	Problem: 1078
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

