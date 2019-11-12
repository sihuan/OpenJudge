#include"bits/stdc++.h"

using namespace std;

int main()
{
    int m,n;
    queue<string> a;
    cin>>n;
    while(n--)
    {
        string x;
        cin>>m;
        if(m==1)
        {
            cin>>x;
            a.push(x);
        }
        else if(m==2)
        {
            if(a.empty()) cout<<"-1"<<endl;
            else
            {
                cout<<a.front()<<endl;
                a.pop();
            }
        }
        else if(m==3)
        {
            while(!a.empty()) a.pop();
        }
    }
}

/**************************************************************
	Problem: 1360
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

