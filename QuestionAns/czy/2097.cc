#include "bits/stdc++.h"
using namespace std;

void put_str(string s)
{
    int n=s.size();
    for(int i=0;i<n&&i<10;++i) cout<<s[i];
    cout<<endl;
}

void put_str(string s,int l)
{
    int n=s.size();
    for(int i=0;i<n&&i<l;++i) cout<<s[i];
    cout<<endl;
}

void put_str(string s,int l ,int l2)
{
    if(l2<0) l2=0;
    int n=s.size();
    int k=0;
    for(int i=l2;i<n;++i)
    {
        ++k;
        cout<<s[i];
        if(k==l) break;
    }
    cout<<endl;
}
int main()
{
    char s[100];
    int k;
    cin >> s;
    while(cin >> k)
    {
        int l, m;
        if(k == 0)
            put_str(s);
        if(k == 1)
        {
            cin >> l;
            put_str(s, l);
        }

        if(k == 2)
        {
            cin >> l >> m;
            put_str(s, l, m);
        }
    }
}

/**************************************************************
	Problem: 2097
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

