#include <iostream>
using namespace std;
#include <stack>
#include <iomanip>
#include <algorithm>
int main()
{
    string s1;
    while(cin>>s1)
    {
        stack<int>s;
        int i;
        for( i=0;i<s1.length();i++)
        {
            if(s1[i] == '(')//
                s.push(1);
            else if(!s.empty())
                s.pop();
            else break;
        }
 
        if(i == s1.length()&&s.empty())
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1352
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

