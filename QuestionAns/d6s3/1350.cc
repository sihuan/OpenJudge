#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    set<int> s1, s2;
    while (cin >> t) {
        if (t == 0) {
            while (cin >> t) {
                if (t == 0) {
                    if (s1 == s2)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                    s1.clear();
                    s2.clear();
                    break;
                }
                s2.insert(t);
            }
        } else
            s1.insert(t);
    }
}
/**************************************************************
	Problem: 1350
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

