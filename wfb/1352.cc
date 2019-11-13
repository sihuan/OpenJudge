#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stack>

using namespace std;

bool isTrue(char *tmp) {
    stack<char> s;
    bool is = true;
    for(int i=0; tmp[i]; ++i) {
        if(tmp[i] == '(')
            s.push(tmp[i]);
        else if(tmp[i] == ')') {
            if(s.empty()) {
                is = false;
                break;
            } else s.pop();
        }
    }
    return is;
}

int main()
{
    char *tmp = new char[105];
    while(gets(tmp) != NULL) {
        if(isTrue(tmp)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1352
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

