#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
 
int main(int argc, char *argv[])
{
    double a;
    cin >> a;
     
    cout << fixed << setprecision(6);
    cout << "Area: " <<  3.14 * a * a << endl;
    cout << "Perimeter: " << 6.28 * a << endl;
 
    return 0;
}

///yrldmwxp fixed
/**************************************************************
	Problem: 1003
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

