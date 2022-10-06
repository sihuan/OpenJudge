#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>
#include <vector>
#include <iomanip>

using namespace std;

void output(set<int> x)
{
    multiset<int>::iterator p;
    for(p=x.begin();p!=x.end();p++)
    {
        if(p==x.begin())
            cout<<*p;
        else
            cout<<", "<<*p;
    }
    cout<<"}"<<endl;
}

int main()
{
//    freopen("in.txt","r",stdin);
    int cases,n;
    cin>>cases;
    for(int q=0;q<cases;q++)
    {
        set<int> A;
        set<int> B;
        multiset<int>::iterator p;
        int in;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            A.insert(in);
        }
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            B.insert(in);
        }
        cout<<"Case# "<<q+1<<":"<<endl;
        cout<<"A = {";
        output(A);
        cout<<"B = {";
        output(B);
        cout<<"A u B = {";
        set<int> C(A);
        for(p=B.begin(); p!=B.end();p++)
            C.insert(*p);
        output(C);
        cout<<"A n B = {";
        set<int> D;
        for(p=B.begin(); p!=B.end();p++)
            if(A.find(*p)!=A.end())
                D.insert(*p);
        output(D);
        cout<<"A - B = {";
        set<int> E;
        for(p=A.begin(); p!=A.end();p++)
            if(B.find(*p)==B.end())
                E.insert(*p);
        output(E);
        cout<<"SA = {";
        set<int> F;
        for(p=B.begin(); p!=B.end();p++)
            if(A.find(*p)==A.end())
                F.insert(*p);
        output(F);
        cout<<"SB = {";
        output(E);
    }
}

/**************************************************************
	Problem: 1349
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

