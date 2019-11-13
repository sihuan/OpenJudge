#include <iostream>
#include <vector>

using namespace std;

class Base{
public:
    Base() {}
    Base(int b) : b_(b){cout<<"Base = "<<b_<<" is created."<<endl;}
    Base(const Base& b) : b_(b.b_) {cout<<"Base = "<<b_<<" is copied."<<endl;}
    ~Base() {cout<<"Base = "<<b_<<" is erased."<<endl;}
protected:
    int b_;
};
class Derived:public Base{
public:
    Derived(int b,int d) : Base(b),d_(d) {cout<<"Derived = "<<d_<<" is created."<<endl;}
    Derived(const Derived& d) :Base(),d_(d.d_) {b_=d.b_;cout<<"Base = "<<b_<<" is copied."<<endl;cout<<"Derived = "<<d_<<" is copied."<<endl;}
    ~Derived() {cout<<"Derived = "<<d_<<" is erased."<<endl;}
private:
    int d_;
};
int main()
{
    int cases, data1, data2;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>data1>>data2;
        Base base1(data1), base2(base1);

        Derived derived1(data1, data2), derived2(derived1);
    }
}
/**************************************************************
	Problem: 1814
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

