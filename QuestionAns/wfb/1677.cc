#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Fract{
public:
    Fract operator *(const Fract& f){
        int tmp1 = n_*f.n_;
        int tmp2 = m_*f.m_;
        int tmp = gcd(tmp1,tmp2);
        Fract x(tmp1/tmp,tmp2/tmp);
        return x;
    }
    operator double () {
        double tmp = n_*1.0/m_;
        return tmp;
    }
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
    int n, m, p, q;
    while(cin >> n >> m >> q >> p)
    {
        Fract f1(n, m), f2(q, p);
        Fract fr = f1 * f2;
        fr.show();
    }
}
/**************************************************************
	Problem: 1677
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

