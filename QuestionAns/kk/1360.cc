#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    queue<string> pup;
    int cases,order;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string in;
        cin>>order;
        if(order==1)
        {
            cin>>in;
            pup.push(in);
        }
        if(order==2)
        {
            if(pup.empty())
                cout<<"-1"<<endl;
            else
            {
                cout<<pup.front()<<endl;
                pup.pop();
            }
        }
        if(order==3)
        {
            while(!pup.empty())
                pup.pop();
        }
    }
}

/**************************************************************
	Problem: 1360
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

