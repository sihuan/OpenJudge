#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<char> s;
    char ss[200];
    while(cin>>ss)
    {
        int flag=1;
        for(int i=0;ss[i]!=0;++i)
        {
            if(ss[i]=='(') s.push(ss[i]);
            if(ss[i]==')' && s.empty())
            {
                flag=0;
                break;
            }
            if(ss[i]==')' )
            {
                char as=s.top();
                if(as=='(') s.pop();
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(!s.empty()) flag=0;
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
            while( !s.empty() ) s.pop();
    }
}

/**************************************************************
	Problem: 1352
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

