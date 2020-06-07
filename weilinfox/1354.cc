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
    map<string, int> a;
    string str1;
    int str2;
    int n;
    //int flag = 1;

    while (cin >> n) {
        while (n--) {
            cin >> str1 >> str2;
            if (a.count(str1)) a[str1] += str2;
            else a[str1] = str2;
        }
        map<string, int>::iterator it;
        for (it = a.begin(); it != a.end(); it++)
            cout << it->first << ':' << it->second << endl;
        a.clear();
    }
}

/**************************************************************
	Problem: 1354
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1276 kb
****************************************************************/

