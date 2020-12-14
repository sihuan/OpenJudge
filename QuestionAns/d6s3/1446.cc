#include <iostream>
using namespace std;

int comb(int m, int n)
{
    if (n == m)
        return 1;
    int fz = 1, fm = 1;
    for (int i = n; i > n - m; i--)
        fz *= i;
    for (int i = m; i >= 1; i--)
        fm *= i;
    return fz / fm;
}

int main()
{
    int c, x, y;
    cin >> c;
    while (c--) {
        cin >> x >> y;
        cout << comb(2, x + 1) * comb(2, y + 1) << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1446
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:244 ms
	Memory:1268 kb
****************************************************************/

