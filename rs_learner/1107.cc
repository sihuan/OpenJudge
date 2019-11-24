#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
    t=*x;*x=*y;*y=t;
}void swap(int &x,int &y)
{
    int t;
    t=x;x=y;y=t;
}
double swap(double *x,double *y)
{
    double t;
    t=*x;*x=*y;*y=t;
}
double swap(double &x,double &y)
{
    double t;
    t=x;x=y;y=t;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

