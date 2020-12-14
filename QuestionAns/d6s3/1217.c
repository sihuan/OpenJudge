#include<stdio.h>
int myFloor(double data)
{
    if (data>=0)
        return (int)data;
    else{
        if ((data-(int)data)>-0.000001)
            return (int)data;
        return ((int)data-1);
    }
}

int myCeil(double data)
{
    if ((data-(int)data)<0.000001)
        return (int)data;
    else if (data>=0)
        return ((int)data+1);
    else
        return ((int)data);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

