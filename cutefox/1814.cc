#include <iostream>
using namespace std;
 
class Base {
    private:
        int n;
    public:
        Base(int s):n(s) {cout << "Base = " << s << " is created.\n";}
        Base(const Base& b):n(b.n) {cout << "Base = " << n << " is copied.\n";}
        ~Base() {cout << "Base = " << n << " is erased.\n";}
        int getn() {return n;}
};
 
class Derived: public Base {
    private:
        int m;
    public:
        Derived(int a, int b):Base(a), m(b) {cout << "Derived = " << b << " is created.\n";}
        Derived(const Derived& d):m(d.m), Base(d) {cout << "Derived = " << m << " is copied.\n";}
        ~Derived() {cout << "Derived = " << m << " is erased.\n";}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

