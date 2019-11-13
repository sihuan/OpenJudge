#include <iostream>
#include <iomanip>

using namespace std;

class Demo {
private:
    int x_;
public:
    Demo() {x_ = 0; cout<<"A data 0 is created!"<<endl;}
    Demo(int x) {x_=x; cout<<"A data "<<x<<" is created!"<<endl;}
    ~Demo() {cout<<"A data "<<x_<<" is erased!"<<endl;}
    void show() {cout<<"This is data "<<x_<<endl;}
};
int main()
{
    Demo tmp(10), tmp2;
    int d;
    cin>>d;
    Demo tmp3(d);

    tmp.show();
    tmp2.show();
    tmp3.show();
    return 0;
}
/**************************************************************
	Problem: 1809
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

