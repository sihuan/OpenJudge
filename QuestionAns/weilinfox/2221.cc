#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;




class Difficult {
public:
    Difficult (int d):dd(d) {}
    void show () {cout << abs(dd) << endl;}
    int dd;
};




int main()
{
    int a;
    cin>>a;
    Difficult difficult(a);
    difficult.show();
    return 0;
}
/**************************************************************
	Problem: 2221
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

