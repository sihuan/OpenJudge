#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;




class Overload {
public:
    Overload () {cout << "Default constructor is called to make a = 0, c = '0'." << endl;}
    Overload (int a) {cout << "First constructor is called to make a = " << a << ", c = '0'." << endl;}
    Overload (char c) {cout << "Second constructor is called to make a = 0, c = '" << c << "'." << endl;}
    Overload (int a, char c) {cout << "Third constructor is called to make a = " << a << ", c = '" << c << "'." << endl;}

    int i; char c;
};




int main()
{
    int i;
    char ch;
    cin>>i>>ch;
    Overload t1, t2(i), t3(ch), t4(i, ch);
    return 0;
}
/**************************************************************
	Problem: 2220
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

