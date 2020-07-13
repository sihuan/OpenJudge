#include <iostream>
using namespace std;

int main()
{
    int c, n, x;
    cin >> c;
    while (c--) {
        unsigned long long sum = 0;
        cin >> n;
        while (n--) {
            cin >> x;
            sum += x * x;
        }
        cout << sum << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1445
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:48 ms
	Memory:1268 kb
****************************************************************/

