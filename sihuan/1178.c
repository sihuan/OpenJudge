#include <stdio.h>
int main()
{
    int n,i,max=0;
    int a[105]={0};
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=0&&n<=100)
        {
            a[n]++;
            if(max<a[n])
                max=a[n];
        }
    }
    for(i=0;i<=100;i++)
        if(a[i]==max)
            printf("%d\n",i);
    return 0;
}
/**************************************************************
	Problem: 1178
	User: 201801011012
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

