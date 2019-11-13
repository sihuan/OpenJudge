#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int isSpec(int n,int k)
{
    n = abs(n);
    int x;
    while(n)
    {
        x = n%10;
        if(x == k)
            return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   int n;
   scanf("%d",&n);
   int i,j,a,b,k;
   int sum;
   for(i=0; i<n; ++i)
   {
       sum = 0;
       scanf("%d%d%d",&a,&b,&k);
       for(j=a; j<=b; ++j)
       {
           if(isSpec(j,k))
            sum+= j;
       }
       printf("%d\n",sum);
   }
	return 0;
}

/**************************************************************
	Problem: 1118
	User: 201601011420
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

