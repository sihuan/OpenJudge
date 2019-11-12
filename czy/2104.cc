#include "bits/stdc++.h"
using namespace std;



class Vec
{
protected:
    set<int>s;
public:
    friend istream & operator >>(istream &is,Vec &p)
    {
        int n,temp;
        is>>n;
        for(int i=0;i<n;++i) {is>>temp;p.s.insert(temp);}
        return is;
    }
    friend ostream & operator <<(ostream &os,Vec &p)
    {
        int flag=0;
        set <int> ::iterator it;
        for(it=p.s.begin();it!=p.s.end();++it)
        {
            if(flag==0) cout<<*it;
            else cout<<" "<<*it;
            flag=1;
        }
        cout<<endl;
    }
    friend Vec operator -(Vec &p1,Vec &p2)
    {
        Vec v;
        set <int> ::iterator it;
        set <int> ::iterator it2;
        for(it=p1.s.begin();it!=p1.s.end();++it)
        {
            for(it2=p2.s.begin();it2!=p2.s.end();++it2)
            {
                if(p2.s.count(*it)==0)
                    v.s.insert(*it);
            }
        }

        return v;
    }
};
int main()
{
    Vec v1, v2, v3;
    cin>>v1;
    cin>>v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    v3 = v1 - v2;
    cout<<"v1:"<<v1;
    cout<<"v2:"<<v2;
    cout<<"v3:"<<v3;
    return 0;
}

/**************************************************************
	Problem: 2104
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

