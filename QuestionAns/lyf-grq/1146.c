#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
double func(double x)
{
	double y;
	if(x<0)
		y=0-x;
		
	else if(0<=x&&x<1)
		y=sin(2*x);
		
	else if(x>=1&&x<5)
		y=sqrt(x*x*x+x);
		
	else if(x>=5)
		y=2*x+10;
		
	return y;
}
int output(int i, double y)
{
	printf("case %d:y=%lg.\n",i,y);
}



int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

