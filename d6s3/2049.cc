#include <iostream>
using namespace std;

class Data {
private:
    double x_;

public:
    Data(double x)
        : x_(x)
    {
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
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2049
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

