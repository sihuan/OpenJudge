#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 1009


int main()
{
   double a[1009];
    int n=0,i=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;++i)
        {
            scanf("%lf",&a[i]);
        }
        int j=0;
    for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>=a[j])
			{
				double temp=0;temp=a[i];a[i]=a[j];a[j]=temp;
					}
				}
	}
	if(n%2==0) printf("%lg\n",(a[n/2-1]+a[n/2])/2);
	else printf("%lg\n",a[n/2]);

    }
}

/**************************************************************
	Problem: 1508
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

