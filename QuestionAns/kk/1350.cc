#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>
#include <vector>
#include <iomanip>
#include <stack>
#include <map>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    int d;
    while(cin>>d)
    {
        set<int> s1;
        set<int> s2;
        if(d!=0)
        {
            s1.insert(d);
            while(cin>>d&&d)
            {
                s1.insert(d);
            }
        }
         while(cin>>d&&d)
            {
                s2.insert(d);
            }
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}


/**************************************************************
	Problem: 1350
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

