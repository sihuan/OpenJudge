#include <iostream>
using namespace std;

class Data {
private:
    double x_;

public:
    void init(double x)
    {
        x_ = x;
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
    Data data;
    double d;
    cin>>d;
    data.init(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2048
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

