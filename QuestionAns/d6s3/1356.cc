#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        list<int> lst;
        list<int>::iterator j;
        int t, c, a, b;
        for (int i = 0; i < n; i++) {
            cin >> t;
            lst.push_back(t);
        }
        cin >> t;
        for (int i = 0; i < t; i++) {
            cin >> c;
            switch (c) {
            case 1:
                cin >> a >> b;
                for (j = lst.begin(); *j != a && j != lst.end(); j++)
                    ;
                if (j != lst.end())
                    lst.insert(++j, b);
                break;
            case 2:
                cin >> a;
                for (j = lst.begin(); j != lst.end();)
                    if (*j <= a)
                        lst.erase(j++);
                    else
                        j++;
                break;
            case 3:
                cin >> a >> b;
                for (j = lst.begin(); *j != b && j != lst.end(); j++)
                    ;
                if (j != lst.end()) {
                    lst.remove(a);
                    for (j = lst.begin(); *j != b && j != lst.end(); j++)
                        ;
                    if (j != lst.end())
                        lst.insert(++j, a);
                }
                break;
            }
        }
        for (j = lst.begin(); j != lst.end(); j++) {
            if (j != lst.begin())
                cout << " ";
            cout << *j;
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1356
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:924 ms
	Memory:1272 kb
****************************************************************/

