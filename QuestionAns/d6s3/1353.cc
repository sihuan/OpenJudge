#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
using namespace std;

int main()
{
    int n, i, m;
    string k, v, s;
    while (cin >> n) {
        map<string, string> mp;
        for (i = 0; i < n; i++) {
            cin >> v >> k;
            mp[k] = v;
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> s;
            try {
                cout << mp.at(s) << endl;
            } catch (out_of_range) {
                cout << "eh" << endl;
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1353
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:3104 ms
	Memory:10512 kb
****************************************************************/

