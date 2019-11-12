#include "bits/stdc++.h"
using namespace std;

class MyString
{
    string s;
public:
    void input()
    {
        cin>>s;
    }
    void output()
    {
        int l2=s.size();
        for(int i=0;i<l2;++i)
            if(s[i]!='.') cout<<s[i];
        cout<<endl;
    }
    void del(string s1)
    {
        //cout<<s1[1];
        int l1=s.size();
        int l2=s1.size();
        for(int i=0;i<l2;++i)
            for(int k=0;k<l1;++k)
            if(s[k]==s1[i]) s[k]='.';
    }
};

int main()
{
    MyString str;
    char tmp[11];
    str.input();
    str.output();
    cin>>tmp;
    str.del(tmp);
    str.output();
    return 0;
}

/**************************************************************
	Problem: 2095
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

