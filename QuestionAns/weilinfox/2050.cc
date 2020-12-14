#include <iostream>
#include <iomanip>
using namespace std;

class Data{
        double a;
public:
        Data() {cout << "Initialize a data 0" << endl;}
        Data(double d):a(d) {
                cout << "Initialize a data " << a << endl;
        }
        double getValue() {
                return a;
        }
        void showValue() {
                cout << a << endl;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

