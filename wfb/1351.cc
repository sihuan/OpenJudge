#include <iostream>
#include <iomanip>
#include <stack>

using namespace std;

int main()
{
    int n;
    stack<double> numS;
    stack<char> opS;
    char op;
    double num;
    double result;
    while(cin>>n) {
        cin>>num;
        numS.push(num);
        for(int i=1; i<n; ++i) {
            cin>>op>>num;
            if(op == '-') num = -num;
            else if(op == '*') {
                num *= numS.top();
                numS.pop();
            } else opS.push(op);
            numS.push(num);
        }
        cin>>op;
        result = 0;
        while(!numS.empty()) {
            result += numS.top();
            numS.pop();
        }
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<result<<endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1351
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1284 kb
****************************************************************/

