#include<stdio.h>
int myFloor(double data)
{
    int a;
    if(data==(int)data)
        return (int)data;
    else if(data>0)
        a=(int)(data);
    else
        a=(int)(data-1);
    return a;
}
int myCeil(double data)
{
    int a;
    if(data==(int)data)
        return (int)data;
    if(data>0)
        a=(int)(data+1);
    else
        a=(int)data;
    return a;
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

