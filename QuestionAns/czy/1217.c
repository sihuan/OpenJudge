#include <stdio.h>
#include <string.h>

int myFloor(double data)
{
        if(data==(int) data) return (int) data;
    if(data>=0) return (int)data;
    else return (int)data-1;
}
int myCeil(double data)
{
    if(data==(int) data) return (int) data;
    return myFloor(data)+1;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

