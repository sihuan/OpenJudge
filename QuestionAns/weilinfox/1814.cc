#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <istream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

class Base {
        int n;
public:
        Base(int n):n(n) {cout << "Base = " << n << " is created." << endl;}
        Base(Base& b):n(b.get()) {cout << "Base = " << n << " is copied." << endl;}
        ~Base() {cout << "Base = " << n << " is erased." << endl;}
        int get() {return n;}
};

class Derived : private Base {
        int d;
public:
        Derived (int a, int b):Base(a),d(b) {cout << "Derived = " << d << " is created." << endl;}
        Derived (Derived& a):Base(a),d(a.getd()) {cout << "Derived = " << a.getd() << " is copied." << endl;}
        ~Derived () {cout << "Derived = " << d << " is erased." << endl;}
        int getd() {return d;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

