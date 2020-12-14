#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0,i,j,k;
    int sum=0;
    double a=0;
    scanf("%lf",&a);
    if(a<0)
    {
        if(a-(int)a+0.5<=0) printf("%d",(int)a-1);
        else printf("%d",(int)a);
    }
    else
    {
        if(a-(int)a-0.5>=0) printf("%d",(int)a+1);
        else printf("%d",(int)a);
    }
    return 0;
}

/**************************************************************
	Problem: 1507
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

