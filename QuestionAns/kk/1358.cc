#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    int m,n;
    while(cin>>n>>m)
    {
        queue<int> que[n];
        for(int i=0; i<m; i++)
        {
            string order;
            cin>>order;
            if(order=="INIT")
            {
                for(int j=0; j<n; j++)
                    while(!que[j].empty())
                        que[j].pop();
            }
            if(order=="PUSH")
            {
                int id,val,t;
                cin>>id>>val>>t;
                while(t--)
                    que[id-1].push(val);
            }
            if(order=="POP")
            {
                int id,t;
                cin>>id>>t;
                if(que[id-1].empty())
                    cout<<"NULL"<<endl;
                else
                {
                    cout<<que[id-1].front()<<endl;
                    while(t--)
                        que[id-1].pop();
                }

            }
        }
    }

}

/**************************************************************
	Problem: 1358
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:340 ms
	Memory:8856 kb
****************************************************************/

