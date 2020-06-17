#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

class Thing {
        string name;
public:
        Thing (string n):name(n) {cout << "Construct a thing " << n << endl;}
        ~Thing () {cout << "Destroy a thing " << name << endl;}
};



int main()
{
    Thing A("Car");
    string str;
    cin>>str;
    Thing B(str);
    return 0;
}
/**************************************************************
	Problem: 2071
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

