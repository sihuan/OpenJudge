#include <stdio.h>
int myFloor(double data)
{
    int m;
    m=(int)data;
    if(data>=0||m==data)
    return m;
    else
        return --m;

}
int myCeil(double data)
{
    int n;
    n=(int)data;
    if(data>=0&&n!=data)
    {
        n++;
    }
   return n;
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

