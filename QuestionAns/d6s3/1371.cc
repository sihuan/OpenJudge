#include <cctype>
#include <iostream>
#include <string>
using namespace std;

string ans;
void ln(string);
void qd(string);

int main()
{
    string st;
    while (cin >> st) {
        ans.clear();
        qd(st);
        for (int i = 0; i < ans.length(); i++) {
            if (ans[i + 1] == '-')
                if (ans[i] == '+') {
                    cout << '-';
                    i++;
                    continue;
                } else if (ans[i] == '-') {
                    cout << '+';
                    i++;
                    continue;
                }
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}

void ln(string st)
{
    ans.push_back('(');
    qd(st);
    ans += ")/(";
    ans += st;
    ans.push_back(')');
}
void qd(string st)
{
    bool f = 1;
    int len = st.length();
    int i = 0;
    if (st[0] == '-')
        i = 1;
    for (; i < len; i++)
        if (!(isdigit(st[i]) || st[i] == '.')) {
            f = 0;
            break;
        }
    if (f) {
        ans.push_back('0');
        return;
    } else if (st == "x") {
        ans.push_back('1');
        return;
    }
    int khs = 0, yxj = 2, yxw = 0;
    for (int i = 0; i < len; i++) {
        if (st[i] == '(')
            khs++;
        else if (st[i] == ')')
            khs--;
        else if (i && !khs && (st[i] == '+' || st[i] == '-')) {
            yxj = 0;
            yxw = i;
            break;
        } else if (i && !khs && (st[i] == '*' || st[i] == '/')) {
            yxj = 1;
            yxw = i;
        }
    }
    if (yxj != 2) {
        string st1 = st.substr(0, yxw), st2 = st.substr(yxw + 1, len);
        switch (st[yxw]) {
        case '+':
            qd(st1);
            ans.push_back('+');
            qd(st2);
            break;
        case '-':
            qd(st1);
            ans.push_back('-');
            qd(st2);
            break;
        case '*':
            ans.push_back('(');
            qd(st1);
            ans.push_back('*');
            ans += st2;
            ans.push_back('+');
            ans += st1;
            ans.push_back('*');
            qd(st2);
            ans.push_back(')');
            break;
        case '/':
            ans.push_back('(');
            qd(st1);
            ans.push_back('*');
            ans += st2;
            ans.push_back('-');
            ans += st1;
            ans.push_back('*');
            qd(st2);
            ans += ")/";
            ans += st2;
            ans += "^2";
        }
        return;
    } else if (st[0] == '(' && st[len - 1] == ')') {
        ans.push_back('(');
        qd(st.substr(1, len - 2));
        ans.push_back(')');
        return;
    } else if (st.find("ln(") == 0 && st[len - 1] == ')')
        ln(st.substr(3, len - 4));
}
/**************************************************************
	Problem: 1371
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

