#include <iostream>
#include <iomanip>
using namespace std;

class Data
{
public:
    double dd;
    void init(double d)
    {
        dd=d;
    }
    double getValue()
    {
        return dd;
    }
    void showValue()
    {
        cout << dd << endl;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

