#include<iostream>
using namespace std;
class Data
{
private:
double i;
public:
Data(double d){i=d;}
double getValue(){return i;}
void showValue(){cout<<i<<endl;}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

