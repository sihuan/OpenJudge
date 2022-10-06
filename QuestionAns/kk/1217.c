#include <stdio.h>
int myFloor(double data)
{
    int n;
    n=(int)data;
    if((double)n-data==0)
        return n;
    if(data<0)
        return n-1;

    return n;
}
int myCeil(double data)
{
    int n;
    n=(int)data;
    if((double)n-data==0)
        return n;
    if(data<0)
        return n;
    return n+1;
}
 
int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
/**************************************************************
	Problem: 1217
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

