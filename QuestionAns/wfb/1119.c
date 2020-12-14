#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int D[100005];
int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,x;
    int i,j;
    long long ans;
    int maxN,minN;
    while(scanf("%d",&n) && n!=0)
    {
        maxN=INT_MIN;
        minN=INT_MAX;
        for(i=0; i<n; ++i)
        {
            scanf("%d",&x);
            if(x>maxN) maxN = x;
            if(x<minN) minN = x;
        }
        ans = (maxN-minN)*2;
        printf("%lld\n",ans);
    }
	return 0;
}

/**************************************************************
	Problem: 1119
	User: 201601011420
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:1136 kb
****************************************************************/

