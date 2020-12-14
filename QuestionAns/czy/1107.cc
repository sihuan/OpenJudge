#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

double swap(double *x,double *y)
{
    double temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

double swap(double &x,double &y)
{
    double temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int x1, y1;
    
    cin>>x1>>y1;
    swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;
    
    cin>>x1>>y1;
    swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;

    double x2, y2;
    
    cin>>x2>>y2;
    swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;
    
    cin>>x2>>y2;
    swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}
/**************************************************************
	Problem: 1107
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

