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
    map<string, string> a;
    string str1, str2;
    int n;
    //int flag = 1;

    while (cin >> n) {
        while (n--) {
            cin >> str1 >> str2;
            a[str2] = str1;
        }
        cin >> n;
        while (n--) {
            cin >> str1;
            if (a.count(str1)) cout << a[str1] << endl;
            else cout << "eh" << endl;
        }
        a.clear();
    }
}

/**************************************************************
	Problem: 1353
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:3220 ms
	Memory:10384 kb
****************************************************************/

