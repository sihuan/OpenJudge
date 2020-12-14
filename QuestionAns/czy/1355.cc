#include"bits/stdc++.h"
using namespace std;
string s[50005];
int main()
{
    int i,n;
    ///char *w,*p;
    vector<string> s;
    string temp;
    int p;
    while(cin>>n)
    {
        s.clear();
        while(n--)
        {
            cin>>temp;
            s.push_back(temp);
        }
        sort(s.begin(),s.end());
        vector<string>::iterator  iter;
       for (iter = s.begin();iter != s.end();++iter) {
        cout << *iter << endl;
    }
    }

    return 0;
}

/**************************************************************
	Problem: 1355
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:1336 ms
	Memory:3444 kb
****************************************************************/

