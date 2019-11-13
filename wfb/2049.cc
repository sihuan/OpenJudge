#include <iostream>
#include <iomanip>

using namespace std;

class Data {
private:
    double x;
public:
    Data(double d) {x = d;}
    double getValue() {return x;}
     void showValue() {cout<<x<<endl;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

