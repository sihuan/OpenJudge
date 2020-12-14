//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class Vec{
    friend istream& operator >>(istream& is,Vec& v){
        int n;
        is>>n;
        int x;
        for(int i=0; i<n; ++i){
            is>>x;
            v.s.insert(x);
        }
        return is;
    }
    friend ostream& operator <<(ostream& os,const Vec& v){
        set<int>::iterator ite;
        for(ite=v.s.begin(); ite!=v.s.end(); ++ite) {
            if(ite != v.s.begin()) cout<<" ";
            cout<<*ite;
        }
        cout<<endl;
        return os;
    }
public:
    Vec(){}
    Vec operator -(const Vec& v){
        Vec c;
        set<int>::iterator ite;
        for(ite=s.begin(); ite!=s.end(); ++ite){
            if(v.s.find(*ite) == v.s.end())
                c.s.insert(*ite);
        }
        return c;
    }
private:
    set<int> s;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

