#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0) {
        multiset<int> ms;
        int s;
        char c;
        while (n--) {
            cin >> c;
            switch (c) {
            case 'B':
                cin >> s;
                ms.insert(s);
                break;
            case 'G':
                multiset<int>::iterator i = ms.begin();
                cout << *i << endl;
                ms.erase(i);
                break;
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1361
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

