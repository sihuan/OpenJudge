#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> *q = new queue<int>[10001];
    int n,m;
    string op;
    int id,val;
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
                cin>>id>>val;
                q[id].push(val);
            }
            else if(op == "POP")
            {
                cin>>id;
                if(!q[id].empty())
                {
                    cout<<q[id].front()<<endl;
                    q[id].pop();
                }
                else
                {
                    cout<<"NULL"<<endl;
                }
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1357
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:7080 kb
****************************************************************/

