#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    queue<int> *q = new queue<int>[10001];
    int n,m;
    string op;
    int id,val,t;
    while(cin>>n>>m)
    {
        for(int i=0; i<m; ++i)
        {
            cin>>op;
            if(op == "INIT")
            {
                for(int j=0; j<n; ++j)
                {
                    while(!q[j].empty())
                        q[j].pop();
                }
            }
            else if(op == "PUSH")
            {
                cin>>id>>val>>t;
                while(t--)
                    q[id].push(val);
            }
            else if(op == "POP")
            {
                cin>>id>>t;
//                while(t--) {
                    if(!q[id].empty())
                    {
                        cout<<q[id].front()<<endl;
                        q[id].pop();
                    }
                    else
                    {
                        cout<<"NULL"<<endl;
                    }
//                }
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1358
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:268 ms
	Memory:43556 kb
****************************************************************/

