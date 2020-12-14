#include"bits/stdc++.h"

using namespace std;

int main()
{
    int m,n;
    while(cin>>m)
    {
       cin>>n;
       queue<int> a[m];
       int v,b;
       string x;
       while(cin>>x)
       {
            if(x[0]=='I')
           {
               for(int i=0;i<m;++i)
               {
                   while(!a[i].empty()) a[i].pop();
               }
           }
           else if(x[0]=='P' && x[1]=='U')
           {
               cin>>v>>b;
               a[v-1].push(b);
           }
           else if(x[0]=='P' && x[1]=='O')
           {
               cin>>v;
               if(a[v-1].empty())
               {
                   cout<<"NULL"<<endl;
               }
               else
               {
                   cout<<a[v-1].front()<<endl;;
                   a[v-1].pop();
               }
           }
       }
    }
}

/**************************************************************
	Problem: 1357
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1276 kb
****************************************************************/

