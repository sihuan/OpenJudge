#include <stdio.h>

int myFloor(double data)
{
    int i;
    i=data-1;
    while (i<=data) i++;
    return i-1;
}

int myCeil(double data)
{
    int i;
    i=data+1;
    while (i>=data) i--;
    return i+1;
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

