#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX 10005

char Src[MAX];
char ans[MAX];
void PrintAns(char ans[],char* end)
{
    char *s;
    for(s=ans; s<end; ++s)
        putchar(*s);
    putchar('\n');
}
void Solve()
{
    int n,m;
    scanf("%d%d",&n,&m);
    getchar();
    char ch,*p;
    int i;
    while(n--)
    {
        p=ans;
        gets(Src);
        for(i=0; Src[i]; ++i)
        {
            if(Src[i]>='a' && Src[i]<='z')
                Src[i] += 'A'-'a';
            if(Src[i]>='A' && Src[i]<='Z')
            {
                Src[i] -= 'A';
                Src[i] += m;
                if(Src[i]<0) Src[i]+=26;
                else Src[i] %= 26;
                Src[i] += 'A';
                *p++ = Src[i];
            }
        }
        printf("%d ",p-ans);
        PrintAns(ans,p);
    }
}
int main()
{
//    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    while(n--)
    {
        Solve();
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1062
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:768 kb
****************************************************************/

