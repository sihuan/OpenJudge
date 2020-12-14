#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

template <class T>
class Sample {
        T smp;
public:
        Sample<T> (T s):smp(s) {cout << "Sample " << s << " is created." << endl;}
        Sample<T> (Sample<T>& sp):smp(sp.getsmp()) {cout << "Sample " << smp << " is copied." << endl;}
        void show () {cout << smp << endl;}
        void add (Sample<T> sp) {smp += sp.getsmp();}
        T getsmp () {return smp;}
};




int main()
{
    int a, b;
    double c, d;
    cin>>a>>b>>c>>d;
    Sample<int> s1(a), s2(b), s3(s1);
    Sample<double> s4(c), s5(d), s6(s5);
    s1.add(s2);
    s1.show();
    s5.add(s4);
    s5.show();
    return 0;
}
/**************************************************************
	Problem: 2075
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

