#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    while(n)
    {
        multiset<int>tmps;
        for(int i=0;i<n;i++)
        {
            char order;
            cin>>order;
            if(order=='B')
            {
                int s;
                cin>>s;
                tmps.insert(s);
            }
            else if(order=='G')
            {
                if(!tmps.empty())
                {
                    cout<<*tmps.begin()<<endl;
                    tmps.erase(tmps.begin());
                }
            }
        }
        cin>>n;
    }
    return 0;
}

/**************************************************************
	Problem: 1361
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

