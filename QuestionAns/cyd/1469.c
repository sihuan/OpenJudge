#include <stdio.h>
int a[200080]={0};
int judge(int n)
{    int i,m,t;
      int max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    max=0;
    for(i=0;i<200010;i++)
    {
        if(a[i]>max)
        {
         max=a[i];
         t=i;
        }

    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",judge(n));
    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201901061304
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:1528 kb
****************************************************************/

