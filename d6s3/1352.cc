#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    char c;
    string a;
    while (getline(cin, a)) {
        stack<char> st;
        for (int i = 0; i < a.length(); i++) {
            c = a[i];
            if (c == '(')
                st.push(c);
            else if (c == ')' && st.size() == 0) {
                st.push(')');
                break;
            } else
                st.pop();
        }
        if (st.size() != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1352
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

