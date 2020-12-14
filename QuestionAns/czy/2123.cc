#include <iostream>
#include <stdio.h>
#include <cstring>
#include<algorithm>
#include <string.h>
#define mod  1000000007
#define INF  0x3f3f3f3f
#define Fuck() cout << "MMP" << endl
using namespace std;

/*bool cmp(const int &a,const int &b )
{
    return a>b;
}*/

const int max_n=100005;

bool flag=true;

int main()
{
    int n,q;
    while(scanf("%d",&n))
    {
        flag=true;
        if(n==0) break;
        int a[max_n];
        int Max=-1;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&q);
            a[q]++;
            if(Max<a[q]) Max=a[q];
        }
        //sort(a,a+n,cmp);
      /*  for(int i=1;i<=n;++i)
        {
            if(Max<a[i]) Max=a[i];
        }*/
        for(int i=1;i<=max_n;++i)
        {
            if(a[i]==Max)
            {
                if(flag) {
                        printf("%d",i);
                        flag=false;
                }
                else
                {
                    printf(" %d",i);
                }
            }
        }
        printf("\n");
    }
}

/**************************************************************
	Problem: 2123
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1588 kb
****************************************************************/

