#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;



class Base {
        int base;
public:
        Base (int b):base(b) {cout << "Base " << base << " is created." << endl;}
        ~Base () {cout << "Base " << base << " is created." << endl;}
};

class Derived:public Base {
        int der;
public:
        Derived (int a, int b):Base(a), der(b) {cout << "Derived " << b << " is created." << endl;}
        ~Derived () {cout << "Derived " << der << " is created." << endl;}
};



int main()
{
    int a, b;
    cin>>a>>b;
    Base base(a);
    Derived derived(a, b);
    return 0;
}
/**************************************************************
	Problem: 2074
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

