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
    deque<string> pup;
    int cases,order;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string in;
        cin>>order;
        if(order==1)
        {
            cin>>in;
            pup.push_back(in);
        }
        if(order==2)
        {
            cin>>in;
            pup.push_front(in);
        }
        if(order==3)
        {
            if(pup.empty())
                cout<<"-1"<<endl;
            else
                cout<<pup.front()<<endl;
        }
        if(order==4)
        {
            if(pup.empty())
                cout<<"-1"<<endl;
            else
                cout<<pup.back()<<endl;
        }
        if(order==5)
        {
            if(pup.empty())
                cout<<"-1"<<endl;
            else
                pup.pop_front();
        }
        if(order==6)
        {
            if(pup.empty())
                cout<<"-1"<<endl;
            else
                pup.pop_back();
        }
        if(order==0)
        {
            while(!pup.empty())
                pup.pop_back();
        }
    }
}

/**************************************************************
	Problem: 1359
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

