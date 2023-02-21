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
            double y=1.0/pow(cos(x),3);
            printf("%.2lf\n",y);
    }


}


/**************************************************************
	Problem: 1206
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

