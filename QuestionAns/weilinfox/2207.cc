#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

class Test {
    string name;
public:
    Test (string n = "NULL"):name(n) {
        cout << "Create an object with name " << name << endl;
    }
    ~Test () {
        cout << "Erase an object with name " << name << endl;
    }

};
int main()
{
    string name;
    Test t1;
    cin>>name;
    Test t2(name);
    return 0;
}
/**************************************************************
	Problem: 2207
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

