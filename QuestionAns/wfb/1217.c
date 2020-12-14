#include <stdio.h>

int myFloor(double data)
{
    int x = (int)data;
    if(data>0)
        return x;
    else if(data<0)
    {
        if(x<=data+1e-12) return x;
        else return x-1;
    }

    else
        return x;
}
int myCeil(double data)
{
    int x = (int)data;
    if(data>0)
    {
       if(x >= data-1e-12) return x;
       else return x+1;
    }

    else if(data<0)
        return x;
    else
        return x;

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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

