#include <iostream>
using namespace std;

class Data {
private:
    double x_;

public:
    Data()
        : x_(0)
    {
        cout << "Initialize a data 0" << endl;
    }
    Data(double x)
        : x_(x)
    {
        cout << "Initialize a data " << x << endl;
    }
    double getValue()
    {
        return x_;
    }
    void showValue()
    {
        cout << x_ << endl;
    }
};
int main()
{
    Data data1;
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2050
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

