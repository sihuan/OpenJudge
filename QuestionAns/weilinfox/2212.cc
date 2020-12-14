#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Cup {
public:
    Cup (int c=0):vol(c) {cout << "A cup of " << vol << " ml is created." << endl;}
    Cup (Cup& c):vol(c.vol) {cout << "A cup of " << vol << " ml is copied." << endl;}
    ~Cup () {cout << "A cup of " << vol << " ml is erased." << endl;}
    void setVolume(int v) {vol = v;}

    int vol;
};

int main()
{
    Cup c1;
    int i, j;
    cin>>i>>j;
    Cup c2(i), c3(c2);
    c3.setVolume(j);
    return 0;
}
/**************************************************************
	Problem: 2212
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

