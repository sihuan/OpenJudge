#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> qe;
    int n, c;
    string st;
    cin >> n;
    while (n--) {
        cin >> c;
        switch (c) {
        case 1:
            cin >> st;
            qe.push(st);
            break;
        case 2:
            if (qe.empty())
                cout << "-1" << endl;
            else {
                cout << qe.front() << endl;
                qe.pop();
            }
            break;
        case 3:
            while (!qe.empty())
                qe.pop();
            break;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1360
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

