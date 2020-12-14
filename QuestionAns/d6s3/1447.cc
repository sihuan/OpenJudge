#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    unsigned long long c, x, y;
    cin >> c;
    while (c--) {
        cin >> x >> y;
        cout << (x / __gcd(x, y)) * (y / __gcd(x, y)) << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1447
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:264 ms
	Memory:1268 kb
****************************************************************/

