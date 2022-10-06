#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    double p,w,m;
    scanf("%lf%lf%lf",&p,&w,&m);
    if(m<=500)
        printf("%.2lf",p*m*w);
    else if(m>500&&m<=1000)
        printf("%.2lf",p*500*w+p*(m-500)*w*0.95);
    else if(m>1000&&m<=2000)
        printf("%.2lf",p*w*975+p*(m-1000)*w*0.9);
    else if(m>2000)
        printf("%.2lf",p*w*1875+p*w*(m-2000)*0.88);
}

/**************************************************************
	Problem: 2412
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

