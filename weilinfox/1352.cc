#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <iomanip>
#include <stack>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    stack<char> a;
    string str;
    //int flag = 1;

    while (cin >> str) {
        stringstream ss(str);
        char ch;
        int flag = 1;
        while (!a.empty()) a.pop();
        while (ss >> ch) {
            if (ch == '(') a.push(ch);
            else {
                if (a.empty()) {flag = 0; break;}
                if (a.top() != '(') flag = 0;
                else a.pop();
            }
            if (!flag) break;
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

/**************************************************************
	Problem: 1352
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1304 kb
****************************************************************/

