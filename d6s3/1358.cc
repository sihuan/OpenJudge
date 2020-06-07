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
        int d, v, t;
        string c;
        while (m--) {
            cin >> c;
            if (c == "INIT") {
                for (int i = 1; i <= n; i++)
                    while (!qe[i].empty())
                        qe[i].pop();
            } else if (c == "PUSH") {
                cin >> d >> v >> t;
                while (t--)
                    qe[d].push(v);
            } else if (c == "POP") {
                cin >> d >> t;
                if (qe[d].empty()) {
                    cout << "NULL" << endl;
                } else {
                    cout << qe[d].front() << endl;
                    while (t--)
                        if (qe[d].empty())
                            break;
                        else
                            qe[d].pop();
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1358
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:424 ms
	Memory:8860 kb
****************************************************************/

