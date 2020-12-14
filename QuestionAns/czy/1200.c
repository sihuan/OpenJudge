#include <stdio.h>
#define MAX_SIZE 200
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,k,j,l;
    for(i=1;i<=n;++i)
    {
        double x;
            scanf("%lf",&x);
            double y=pow((1+x*x),x)*(log(1+x*x)+(2*x*x)/(1+x*x));
            printf("%.2lf\n",y);
    }


}

/**************************************************************
	Problem: 1200
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

