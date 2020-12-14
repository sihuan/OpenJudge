#include <iostream>
#include "iomanip"

using namespace std;

class Data
{
    private:
        double x;
    public:
        Data(double xx) {x=xx;}
        double init(double xx){x=xx;}
         double getValue(){return x;}
          void showValue()
          {
              cout<<x<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

