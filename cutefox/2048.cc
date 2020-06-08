#include<iostream>
#include<cmath>
using namespace std;
class Data
{
public:
    void init(double d)
    {
        value = d;
    }
    double getValue()
    {
        return value;
    }
    void showValue()
    {
        cout<<value<<endl;
    }
private:
    double value;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

