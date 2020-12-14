#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    deque<string> dq;
    int n, c;
    string st;
    cin >> n;
    while (n--) {
        cin >> c;
        switch (c) {
        case 0:
            dq.clear();
            break;
        case 1:
            cin >> st;
            dq.push_back(st);
            break;
        case 2:
            cin >> st;
            dq.push_front(st);
            break;
        case 3:
            if (dq.empty())
                cout << "-1" << endl;
            else
                cout << dq.front() << endl;
            break;
        case 4:
            if (dq.empty())
                cout << "-1" << endl;
            else
                cout << dq.back() << endl;
            break;
        case 5:
            if (dq.empty())
                cout << "-1" << endl;
            else
                dq.pop_front();
            break;
        case 6:
            if (dq.empty())
                cout << "-1" << endl;
            else
                dq.pop_back();
            break;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1359
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

