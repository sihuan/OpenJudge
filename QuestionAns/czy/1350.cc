#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set <int> A;
    set <int> B;
    while(cin>>n)
    {
        int temp,temp2;
        if(n!=0) {
                A.insert(n);
                while(cin>>temp && temp!=0) A.insert(temp);
                }
        while(cin>>temp2 && temp2!=0) B.insert(temp2);
        set<int>::iterator it;
        int flag=1;
        for(it=A.begin();it!=A.end();++it)
        {
            if(B.count(*it)==0) flag=0;
        }
        for(it=B.begin();it!=B.end();++it)
        {
            if(A.count(*it)==0) flag=0;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        A.clear();
        B.clear();
    }
}


/**************************************************************
	Problem: 1350
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

