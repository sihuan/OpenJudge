#include<stdio.h>
int main()
{
    double cost=0,a;
    int money;
    while(scanf("%lf",&a)!=EOF)
    {
        cost=cost+a;
    }
    if(cost>=4899)
        money=(int)cost*0.8;
    else if(cost>=2499)
        money=(int)cost*0.85;
    else if(cost>=899)
        money=(int)cost*0.9;
    else if(cost>=399)
        money=(int)cost*0.95;
    else
        money=(int)cost;
    printf("%d.00",money);
    return 0;
}
/**************************************************************
	Problem: 1762
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

