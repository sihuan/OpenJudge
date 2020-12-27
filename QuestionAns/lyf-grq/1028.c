#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char A,B;
    double she,hua,end,step,kong;
    scanf("%c->%c",&A,&B);
    scanf("%lf%lf%lf",&kong,&end,&step);
    printf("   %c  ->    %c\n",A, B);
    if(A=='C'&&B=='F')
    {
        she=kong;
        for(she=she;she<=end+0.01;she=she+step)//精度控制（？）
        {
            hua=(she*9/5+32);
            printf("%5.1lf -> %5.1lf\n",she,hua);
        }
    }
    else if(A=='F'&&B=='C')
    {
        hua=kong;
        for(hua=hua;hua<=end+0.01;hua=hua+step)
        {
            she=(hua-32)*5/9;
            printf("%5.1lf -> %5.1lf\n",hua,she);
        }
    }
    return 0;
    }

/**************************************************************
	Problem: 1028
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

