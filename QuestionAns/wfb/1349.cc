#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

void print(const set<int>& x,string s) {
    bool is = true;
    set<int>::iterator ite;
    cout<<s<<" = {";
    is = true;
    for(ite=x.begin(); ite != x.end(); ++ite) {
        if(is) is=false;
        else cout<<", ";
        cout<<*ite;
    }
    cout<<"}"<<endl;
}
int main()
{
    int n;
    cin>>n;
    set<int> a;
    set<int> b;
    set<int>::iterator ite;
    for(int i=1; i<=n; ++i) {
        int m;
        cin>>m;
        while(m--) {
            int x;
            cin>>x;
            a.insert(x);
        }
        cin>>m;
        while(m--) {
            int x;
            cin>>x;
            b.insert(x);
        }
        set<int> c(a);//a+b
        for(ite=b.begin(); ite!=b.end(); ++ite) {
            c.insert(*ite);
        }
        set<int> d;//ab
        for(ite=b.begin(); ite!=b.end(); ++ite) {
            if(a.find(*ite) != a.end()) d.insert(*ite);
        }
        set<int> e;//a-b || sb
        for(ite=a.begin(); ite!=a.end(); ++ite) {
            if(b.find(*ite) == b.end()) e.insert(*ite);
        }
        set<int> f;//b-a || sa
        for(ite=b.begin(); ite!=b.end(); ++ite) {
            if(a.find(*ite) == a.end()) f.insert(*ite);
        }
        cout<<"Case# "<<i<<":"<<endl;
        print(a,"A");
        print(b,"B");
        print(c,"A u B");
        print(d,"A n B");
        print(e,"A - B");
        print(f,"SA");
        print(e,"SB");
        a.clear();
        b.clear();
    }

    return 0;
}

/**************************************************************
	Problem: 1349
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

