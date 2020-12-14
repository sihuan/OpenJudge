#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0) {
        multiset<int> ms;
        multiset<int>::iterator i;
        int s;
        char c;
        while (n--) {
            cin >> c >> s;
            switch (c) {
            case 'i':
                ms.insert(s);
                break;
            case 'd':
                for (i = ms.begin(); *i != s && i != ms.end(); i++)
                    ;
                ms.erase(i);
                break;
            }
        }
        for (i = ms.begin(); i != ms.end(); i++) {
            if (i != ms.begin())
                cout << " ";
            cout << *i;
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1362
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

