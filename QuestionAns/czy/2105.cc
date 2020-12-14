#include "bits/stdc++.h"
using namespace std;

class MyString
{
    string s;
    char s2[1009];
public:
    void input()
    {
        cin>>s;
        int n=s.size();
        int k=0;
        for(int i=n-1;i>=0;--i)
        {
            s2[k]=s[i];
            k++;
        }
        s2[k]=0;
        //cout<<s2<<endl;;
    }
    void output()
    {
        if(s==s2)
        {
            int l=s.size()/2;
            if(s.size()%2==0)
            {
                for(int i=0;i<l;++i)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                for(int i=0;i<=l;++i)
                    cout<<s[i];
                cout<<endl;
            }
        }
        else cout<<s<<endl;
    }
};

int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

