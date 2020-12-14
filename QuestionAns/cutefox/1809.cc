#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Demo
{
public:
    Demo(int a=0)
    {
        value = a;
        cout<<"A data "<<value<<" is created!"<<endl;
    }
    ~Demo()
    {
        cout<<"A data "<<value<<" is erased!"<<endl;
    }
    void show(){
    cout<<"This is data "<<value<<endl;
    }

private:
    int value;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

