#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=1,x,up=1,down=1;
    int n,i,flag=1;
    scanf("%lf%d",&x,&n);
    x=3.1415926*x/180;
    for(i=1;i<n;i++)
    {
        flag=-flag;
        up=up*x*x;
        down=down*2*i*(2*i-1);
        sum=sum+up/down*flag;
    }
    printf("%lf",sum);
    return 0;
}
/**************************************************************
	Problem: 2131
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

