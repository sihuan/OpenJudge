#include <iostream>
#include "iomanip"

using namespace std;

class  Demo
{
    private:
        int x;
    public:
        Demo(){x=0;cout<<"A data 0 is created!"<<endl;}
        Demo(int xx){x=xx;cout<<"A data "<<xx<<" is created!"<<endl;}
        void show(){cout<<"This is data "<<x<<endl;}
        ~Demo(){cout<<"A data "<<x<<" is erased!"<<endl;}
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

