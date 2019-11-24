#include<iostream>
using namespace std;
double area(double r=1.0)
{
    double s;
    s=r*r*3.14;
    return s;
}
int main()
{
	double r;
	cin>>r;
	cout<<area(r)<<endl;
	cout<<area()<<endl;
	return 0;
}
/**************************************************************
	Problem: 1280
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

