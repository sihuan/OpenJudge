#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double low,high;
    double step,change;
    char ch1,ch2;
    scanf("%c->%c",&ch1,&ch2);
    scanf("%lf%lf%lf",&low,&high,&step);
    printf("   %c  ->    %c\n",ch1,ch2);
    if(ch1=='C')
        while(low<high||fabs(low-high)<1e-6)
        {
            change=low*9.0/5.0+32.0;
            printf("%5.1lf -> %5.1lf\n",low,change);
            low+=step;
        }
    if(ch1=='F')
        while(low<high||fabs(low-high)<1e-6)
        {
            change=(low-32)*5/9;
            printf("%5.1lf -> %5.1lf\n",low,change);
            low+=step;
        }
}

/**************************************************************
	Problem: 1028
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

