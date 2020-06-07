#include <iostream>
#include <iomanip>
using namespace std;

class Data{
        double a;
public:
        void init(double d) {
                a = d;
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
    Data data;
    double d;
    cin>>d;
    data.init(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2048
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

