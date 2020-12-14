#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << endl;
    return 0;
}
/**************************************************************
	Problem: 1355
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:1284 ms
	Memory:3112 kb
****************************************************************/

