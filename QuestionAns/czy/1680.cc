#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Array
{
public:
    vector<T> v;
    Array(int nn){}
    void input(int nnn)
    {
        for(int i=0;i<nnn;++i)
        {
            T tem;
            cin>>tem;
            v.push_back(tem);
        }
    }
    T& operator[](int i){return v[i];}

};

int ys(int x,int y)
    {
        if(x%y==0) return y;
        else return ys(y,x%y);
    }


class Fract
{
    int a,b;
public:
    Fract(){}
    Fract(int m,int n)
    {
        int mm=m,nn=n;
        if(mm<0) mm=-1*mm;
        if(nn<0) nn=-1*nn;
        int t=ys(mm,nn);
        m=m/t;
        n=n/t;
        if(n<0) {m=-1*m;n=-1*n;}
        a=m;
        b=n;
    }
    friend Fract operator *(Fract &x,Fract &y)
        {
           int aa=x.a*y.a;
           int bb=x.b*y.b;
           Fract temp(aa,bb);
           return temp;
       }
    void show()
    {
        if(a==0) {cout<<"0"<<endl;return ;}
        cout<<a;
        if(b!=1){
            cout<<"/"<<b;
        }
        cout<<endl;
    }
     friend istream &operator>>(istream &is,Fract &f)
    {
        is>>f.a>>f.b;
        return is;
    }
    Fract &operator +=(Fract &x){
        Fract y(x.a*b+x.b*a,x.b*b);
        return *this=y;
    }

};


int main()
{
    int  n;
    cin >> n;
    Array<double> db(1000);
    db.input(n);
    double dbsum(0.0);
    for(int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(1000);
    fr.input(n);
    Fract frsum(0, 1);
    for(int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}

/**************************************************************
	Problem: 1680
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

