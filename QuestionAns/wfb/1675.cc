#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Fract{
public:
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

#include <cstdio>
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        fr.show();
    }
}

/**************************************************************
	Problem: 1675
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

