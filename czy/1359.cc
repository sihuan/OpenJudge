#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    string t;
    cin>>n;
    deque<string>d;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        if(m==1)
        {
            cin>>t;
            d.push_front(t);
        }
        else if(m==2)
        {
            cin>>t;
            d.push_back(t);
        }
        else if(m==3)
        {
            if(d.empty()) cout<<"-1"<<endl;
            else cout<<d.back()<<endl;
        }
        else if(m==4)
        {
            if(d.empty()) cout<<"-1"<<endl;
            else cout<<d.front()<<endl;
        }
        else if(m==5)
        {
            if(d.empty()) cout<<"-1"<<endl;
            else d.pop_back();
        }
        else if(m==6)
        {
            if(d.empty()) cout<<"-1"<<endl;
            else d.pop_front();
        }
        else if(m==0)
        {
            d.clear();
        }
    }
}


/**************************************************************
	Problem: 1359
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

