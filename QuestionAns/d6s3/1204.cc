#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
char sx[13] = { 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2', 'A' };

bool mycmp(string s1, string s2)
{
    if (s1[0] != s2[0])
        return s1[0] > s2[0];
    else
        return find(sx, sx + 12, s1[1]) < find(sx, sx + 12, s2[1]);
}

int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        vector<string> st;
        string tmp;
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            st.push_back(tmp);
        }
        sort(st.begin(), st.end(), mycmp);
        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < st.size(); j++) {
            if (j % 13 == 0 && j)
                cout << endl;
            else if (j != 0)
                cout << " ";
            cout << st[j];
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1204
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

