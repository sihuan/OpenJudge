#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Cup {
    int vol;
public:
    Cup (int v=0):vol(v) {cout << "A cup of " << vol <<\
        " ml is created." << endl;}
    Cup (Cup& c):vol(c.getv()) {cout << "A cup of " << vol \
        <<" ml is copied." << endl;}
    ~Cup() {cout << "A cup of " << vol \
        << " ml is erased." << endl;}
    int getv () {return vol;}
    void setVolume (int s) {vol = s;}
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

