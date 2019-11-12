#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    list<int> s;
    list<int>::iterator p;
    while(cin>>n)
    {
        s.clear();
        for(int i=0; i<n; i++)
        {
            int pp;
            cin>>pp;
            s.push_back(pp);
        }
        int m;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int x,y,z;
            cin >> x;
            if(x== 1)
            {
                cin>>y>>z;
                for(p=s.begin(); p!=s.end()&&*p!=y; p++);
                 if(p!=s.end()) s.insert(++p,z);
            }
            else if(x==2)
            {
                cin>>y;
                for(p=s.begin(); p!=s.end(); )
                {
                    if(*p<=y)
                    {
                        s.erase(p++);  //mark
                    }
                    else ++p;
                }
            }
            else if(x==3)
            {
                cin>>y>>z;
                for(p=s.begin(); p!=s.end()&&*p!=z; p++);
                 if(p!=s.end())
                {
                    s.remove(y);
                    for(p=s.begin(); p!=s.end()&&*p!=z; p++);
                    if(p!=s.end())
                        s.insert(++p,y);
                }

            }

        }
        int flag=0;
        for(p=s.begin(); p!=s.end(); p++)
        {
            if(flag==0) cout<<*p;
            else cout<<" "<<*p;
            flag=1;
        }
        cout<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1356
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:712 ms
	Memory:1272 kb
****************************************************************/

