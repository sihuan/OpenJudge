#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n) {
        cin >> m;
        queue<int> qe[n + 1];
        int d, v;
        string c;
        while (m--) {
            cin >> c;
            if (c == "INIT") {
                for (int i = 1; i <= n; i++)
                    while (!qe[i].empty())
                        qe[i].pop();
            } else if (c == "PUSH") {
                cin >> d >> v;
                qe[d].push(v);
            } else if (c == "POP") {
                cin >> d;
                if (qe[d].empty())
                    cout << "NULL" << endl;
                else {
                    cout << qe[d].front() << endl;
                    qe[d].pop();
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1357
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1276 kb
****************************************************************/

