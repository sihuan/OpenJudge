#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while(cin>>n) {
        string *s = new string[n+1];
        for(int i=0; i<n; ++i)
            cin>>s[i];
        sort(s,s+n);
        for(int i=0; i<n; ++i)
            cout<<s[i]<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1355
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:1324 ms
	Memory:3184 kb
****************************************************************/

