#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    double b,c;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a<0)
        {
            sum1++;
            sum3=sum3+a;
        }
        else
        {
            sum2++;
            sum4=sum4+a;
        }
        scanf(" %d",&a);
    }
    b=(sum3*1.0)/sum1;
    c=(sum4*1.0)/sum2;
    if(sum1!=0)
        printf("%d %.2f\n",sum1,b);
    else
        printf("0\n");
    if(sum2!=0)
        printf("%d %.2f\n",sum2,c);
    else
        printf("0\n");
    return 0;
}

/**************************************************************
	Problem: 1120
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

