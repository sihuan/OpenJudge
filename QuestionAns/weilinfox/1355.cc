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

    multiset<string> st;
    multiset<string>::iterator it;

    cin >> n;
    while (n--) {
        cin >> str1;
        st.insert(str1);
    }

    for (it = st.begin(); it != st.end(); it++) cout << *it << endl;
}

/**************************************************************
	Problem: 1355
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:1364 ms
	Memory:4180 kb
****************************************************************/

