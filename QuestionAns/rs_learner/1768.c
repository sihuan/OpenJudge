#include<stdio.h>
int main()
{
    double p,s,w;
    int cost,b;
    scanf("%lf%lf%lf",&p,&s,&w);
    if(s<250)
        cost=s*w*p;
    if(s>=250&&s<500)
        cost=0.98*s*w*p;
    if(s>=500&&s<1000)
        cost=0.95*s*w*p;
    if(s>=1000&&s<2000)
        cost=0.92*s*w*p;
    if(s>=2000&&s<3000)
        cost=0.90*s*w*p;
    if(s>=3000)
        cost=0.85*s*w*p;
    cost=(cost+5)/10*10;
    printf("%d",cost);
    return 0;
}
/**************************************************************
	Problem: 1768
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

