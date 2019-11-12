#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, s, c;
    scanf("%d",&s);
    for(c=1;c<=s;c++)
    {
    scanf("%d",&n);
    long long int a[47]={1,2};
    for(i=2;i<=n;i++)
    {
  
        a[i]=a[i-1]+a[i-2];
    }
    printf("%lld\n",a[n-1]);
    }
    return 0;
}
/**************************************************************
	Problem: 1095
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

