#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n, i, t;
    string k;
    while (cin >> n) {
        map<string, int> mp;
        for (i = 0; i < n; i++) {
            cin >> k >> t;
            mp[k] += t;
        }
        for (map<string, int>::iterator i = mp.begin(); i != mp.end(); i++)
            cout << i->first << ":" << i->second << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1354
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1276 kb
****************************************************************/

