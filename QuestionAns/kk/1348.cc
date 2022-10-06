#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>
#include <vector>


using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    string order;
    int a,b,c;
    cin>>order>>a>>b;
    vector<int> v(a,b);
    while(cin>>order)
    {
        if(order=="Modify")
        {
            cin>>a>>b;
            v[a-1]=b;
        }
        if(order=="Insert")
        {
            cin>>a>>b>>c;
            v.insert(v.begin()+a-1,v.begin()+b-1,v.begin()+c);
        }
        if(order=="Erase")
        {
            cin>>a>>b;
            v.erase(v.begin()+a-1,v.begin()+b);
        }
        if(order=="Print")
        {
            cin>>a>>b;
            for(int i=a-1;i<b;i++)
            {
                if(i==a-1)
                    cout<<"["<<i+1<<"]:"<<v[i];
                else
                    cout<<" ["<<i+1<<"]:"<<v[i];
            }
            cout<<endl;
        }
    }
}

/**************************************************************
	Problem: 1348
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:308 ms
	Memory:118468 kb
****************************************************************/

