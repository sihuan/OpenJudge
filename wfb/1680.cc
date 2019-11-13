#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

template <typename T>
class Array{
public:
    Array(int n) : size(n){
        a_ = new T[n];
    }
    void input(int n){
        int l = n<size?n:size;
        for(int i=0; i<l; ++i)
            cin>>a_[i];
    }
    T operator [] (int i){return a_[i];}
private:
    T *a_;
    int size;
};


class Fract{
    friend istream& operator >>(istream& is,Fract& f){
        is>>f.n_>>f.m_;
        return is;
    }
public:
    Fract operator *(const Fract& f){
        int tmp1 = n_*f.n_;
        int tmp2 = m_*f.m_;
        int tmp = gcd(tmp1,tmp2);
        Fract x(tmp1/tmp,tmp2/tmp);
        return x;
    }
    void operator +=(const Fract& f){
        int tmp2 = m_*f.m_;
        int tmp1 = n_*f.m_+f.n_*m_;
        int tmp = gcd(tmp1,tmp2);
        n_ = tmp1/tmp;
        m_ = tmp2/tmp;
        if(m_<0) {
            n_ = -n_;
            m_ = -m_;
        }
    }
    operator double () {
        double tmp = n_*1.0/m_;
        return tmp;
    }
    Fract() : n_(0),m_(1){}
    Fract(int n,int m) : n_(n),m_(m){
        int tmp = gcd(n,m);
        n_ /= tmp;
        m_ /= tmp;
        if(m_<0) {
            n_ = -n_;
            m_ = -m_;
        }
    }
    void show() const {
        if(n_ == 0 || m_==1) cout<<n_<<endl;
        else cout<<n_<<"/"<<m_<<endl;
    }

private:
    int n_,m_;
    int gcd(int n,int m){
        while(m){
            int tmp = n%m;
            n = m;
            m = tmp;
        }
        return n;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

