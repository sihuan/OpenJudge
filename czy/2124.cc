#include <iostream>
#include <stdio.h>
#include <cstring>
#include<algorithm>
#include <string.h>
#define mod  1000000007
#define INF  0x3f3f3f3f
#define Fuck() cout << "MMP" << endl
using namespace std;

bool cmp(const int &a,const int &b )
{
    return a>b;
}

const int max_n=100005;

bool flag=true;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        char a[52];
        scanf(" %s",&a);
        int len=strlen(a);
        if(n<0)
        {
            n=-n;
            for(int i=1;i<=n;++i)
            {
                //char as=a[len-1];
                for (int j=len-1;j>0;--j)
                {
                  swap(a[j],a[j-1]);
                //  printf(" %c%c",a[j],a[j-1]);

                }
            }

        }
        else if(n>0)
        {
            for(int i=1;i<=n;++i)
            {
                //char as=a[len-1];
                for (int j=0;j<len-1;++j)
                {
                  swap(a[j],a[j+1]);
                }
            }

        }
        for(int k=0;k<len;++k)
        {
            printf("%c",a[k]);
        }
        printf("\n");

    }
}

/**************************************************************
	Problem: 2124
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

