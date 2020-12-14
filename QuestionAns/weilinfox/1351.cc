#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <iomanip>
#include <stack>

using namespace std;

int main()
{
    stack<double> a;
    int n;
    while(cin >> n)
    {
        double temp, sum = 0;
        char ch;
        cin >> temp;
        a.push(temp);
        n--;
        while (n--) {
            cin >> ch >> temp;
            if(ch == '+')
                a.push(temp);
            else if(ch == '-')
                a.push(-temp);
            else if(ch == '*') {
                temp *= a.top();
                a.pop();
                a.push(temp);
            }
        }

        cin >> ch;
        while(!a.empty()) {
            sum += a.top();
            a.pop();
        }
        cout << setprecision(2) << fixed << sum << endl;
    }
}

/**************************************************************
	Problem: 1351
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

