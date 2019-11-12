#include "bits/stdc++.h"
using namespace std;

template <typename T>
class MyArray
{
private:
    T ss[5000];
    int k;
public:
    MyArray(int n):k(n){}
    T & operator[](int s)
    {
        return ss[s];
    }

};

int main()
{
    int k, m, n;

    cin >> k;
    MyArray<string> s(k);
    for(int i = 0; i < k; i++)
        cin >> s[i];

    cin >> m >> n;
    cout << s[m];
    for(int i = m + 1; i <= n; i++)
        cout << " " << s[i];
    cout << endl;

    cin >> k;
    MyArray<int> a(k);
    for(int i = 0; i < k; i++)
        cin >> a[i];

    cin >> m >> n;
    cout << a[m];
    for(int i = m + 1; i <= n; i++)
        cout << " " << a[i];
    cout << endl;
}

/**************************************************************
	Problem: 2108
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

