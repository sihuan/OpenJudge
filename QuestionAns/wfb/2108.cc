#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

template<typename T>
class MyArray{
public:
    MyArray(int n) {src_ = new T[n];}
    T& operator [](int i) {
        return src_[i];
    }
private:
    T *src_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

