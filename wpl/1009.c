#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double m,n,x,a;
    scanf("%lf %lf %lf",&m,&n,&x);
    if(m*x>=n)
    {
        a=m*x*0.88;
        printf("%.2lf",a);
    }
    else
    {
        a=m*x;
        printf("%.2lf",a);
    }

return 0;
}

/**************************************************************
	Problem: 1009
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

