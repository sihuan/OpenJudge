#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set <int> A;
    set <int> B;
    for(int k=1;k<=n;++k)
    {
        cout<<"Case# "<<k<<":"<<endl;
        set <int> all;
        set <int> in;
        set <int> diff;
        set <int> SA;
        set <int> SB;
        int x1,x2,temp;
        cin>>x1;
        for(int i=0;i<x1;++i)
        {
            cin>>temp;
            A.insert(temp);
            all.insert(temp);
        }
        cin>>x2;
        for(int i=0;i<x2;++i)
        {
            cin>>temp;
            B.insert(temp);
            all.insert(temp);
        }
        set<int>::iterator it;
        for(it=A.begin();it!=A.end();++it)
        {
            if(B.count(*it)>0) in.insert(*it);
            else diff.insert(*it);
        }
        for(it=all.begin();it!=all.end();++it)
        {
            if(A.count(*it)==0) SA.insert(*it);
            if(B.count(*it)==0) SB.insert(*it);
        }
        int flag=0;
        cout<<"A = {";
        for(it=A.begin();it!=A.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"B = {";
        for(it=B.begin();it!=B.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"A u B = {";
        for(it=all.begin();it!=all.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"A n B = {";
        for(it=in.begin();it!=in.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"A - B = {";
        for(it=diff.begin();it!=diff.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"SA = {";
        for(it=SA.begin();it!=SA.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        flag=0;
        cout<<"SB = {";
        for(it=SB.begin();it!=SB.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<", "<<*it;
            flag=1;
        }
        cout<<"}"<<endl;

        A.clear();
        B.clear();
        all.clear();
        in.clear();
        diff.clear();
        SA.clear();
        SB.clear();
    }
    }


/**************************************************************
	Problem: 1349
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

