#include<iostream>
#include<cmath>
using namespace std;
class Data
{
public:
    Data()
    {
        flag=1;
        cout<<"A default object is created."<<endl;
    }

    Data(int c)
    {
        flag=2;
        a=c;
       cout<< "An integer object "<<a<<" is created."<<endl;

    }
    Data(double a)
    {
        flag=3;
        b = a;
        cout<<"A double object "<<a<<" is created."<<endl;
    }
    ~Data()
    {
        if(flag==2)
            cout<<"The integer object "<<a<<" is erased."<<endl;
        else if(flag==3)
            cout<<"The double object "<<b<<" is erased."<<endl;
        else
            cout<<"The default object is erased."<<endl;
    }
private:
    int a;
    double b;
    int flag;
};
int main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}
/**************************************************************
	Problem: 2192
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

