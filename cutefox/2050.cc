#include<iostream>
using namespace std;
class Data
{
public:
    Data()
    {
        data=0;
        cout<<"Initialize a data 0"<<endl;
    }
    Data(double a)
    {
        data = a ;
        cout<<"Initialize a data "<<data<<endl;
    }
    double getValue(){return data;}
    void showValue(){cout<<data<<endl;}
private:
    double data;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

