#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>

using namespace std;

int main()
{
    set<int> a, b;

    int c;
    while (cin >> c) {
        int t;
        if (c) {
            a.insert(c);
            while (cin >> t && t)
                a.insert(t);
        }
        while (cin >> t && t)
            b.insert(t);

        //int flag = 1;
        //set<int>::iterator it1, it2;

        //if (a.size() != b.size()) flag = 0;

        if (a == b) cout << "YES" << endl;
        else cout << "NO" << endl;

        a.clear();
        b.clear();
    }


    return 0;
}

/**************************************************************
	Problem: 1350
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

