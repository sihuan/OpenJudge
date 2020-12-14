#include <iostream>
#include <iomanip>

using namespace std;

void swap(int &x1,int &x2)
{
    int t;
    t = x1;
    x1 = x2;
    x2 = t;
}
void swap(int *x1,int *x2)
{
    int t;
    t = *x1;
    *x1 = *x2;
    *x2 = t;
}
void swap(double &x1,double &x2)
{
    double t;
    t = x1;
    x1 = x2;
    x2 = t;
}
void swap(double *x1,double *x2)
{
    double t;
    t = *x1;
    *x1 = *x2;
    *x2 = t;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

