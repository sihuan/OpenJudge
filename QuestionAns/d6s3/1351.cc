#include <iomanip>
#include <iostream>
#include <stack>
using namespace std;

bool cmdcmp(char a, char b)
{
    if (a == '*' && b != '*')
        return 0;
    return 1;
}

double calc(double n1, double n2, char c)
{
    switch (c) {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    }
    return n2;
}

int main()
{
    int n;
    double t, t1, t2;
    char c;
    while (cin >> n) {
        stack<double> sn;
        stack<char> sc;
        for (int i = 0; i < n; i++) {
            cin >> t >> c;
            sn.push(t);
            while (!sc.empty() && sn.size() > 1 && cmdcmp(c, sc.top())) {
                t1 = sn.top();
                sn.pop();
                t2 = sn.top();
                sn.pop();
                sn.push(calc(t2, t1, sc.top()));
                sc.pop();
            }
            sc.push(c);
        }
        cout << fixed << setprecision(2) << sn.top() << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1351
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1288 kb
****************************************************************/

