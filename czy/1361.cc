#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,tmp;
    while(cin>>n&&n)
    {
        multiset<int>m;
        for(int i=0;i<n;i++)
        {
            char c;
            cin>>c;
            if(c=='B')
            {
                cin>>tmp;
                m.insert(tmp);
            }
            else if(c=='G')
            {
                if(!m.empty())
                {
                    multiset <int>::iterator p=m.begin();
                    cout<<*p<<endl;
                    m.erase(p);
                }
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1361
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

