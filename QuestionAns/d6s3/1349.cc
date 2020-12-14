#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
using namespace std;

void pst(set<int>& s)
{
    if (s.size() == 0)
        cout << "{}" << endl;
    else {
        cout << "{" << *s.begin();
        for (set<int>::iterator i = ++s.begin(); i != s.end(); i++)
            cout << ", " << *i;
        cout << "}" << endl;
    }
}

int main()
{
    int T, n, t;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        set<int> s1, s2, so, sd;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> t;
            s1.insert(t);
        }
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> t;
            s2.insert(t);
        }
        cout << "Case# " << i << ":" << endl;
        cout << "A = ";
        pst(s1);
        cout << "B = ";
        pst(s2);
        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(sd, sd.begin()));
        cout << "A u B = ";
        pst(sd);
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(so, so.begin()));
        cout << "A n B = ";
        pst(so);
        so.clear();
        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(so, so.begin()));
        cout << "A - B = ";
        pst(so);
        so.clear();
        set_difference(sd.begin(), sd.end(), s1.begin(), s1.end(), inserter(so, so.begin()));
        cout << "SA = ";
        pst(so);
        so.clear();
        set_difference(sd.begin(), sd.end(), s2.begin(), s2.end(), inserter(so, so.begin()));
        cout << "SB = ";
        pst(so);
        so.clear();
        sd.clear();
    }
    return 0;
}
/**************************************************************
	Problem: 1349
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

