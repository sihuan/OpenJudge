#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class newInt {
    int a;
public:
    newInt (int i = 0):a(i) {}
    int operator + (newInt& n) {
        int maxn;
        maxn = this->a > n.a ? this-> a : n.a;
        int a = this->a , b = n.a;
        int leng = 1;
        while (maxn / leng) leng *= 10;
        leng /= 10;

        int ans = 0;
        while (leng) {
            ans *= 10;
            ans += (a/leng + b/leng)%10;
            leng /= 10;
        }
        return ans;
    }
    friend ostream& operator<< (ostream& os, newInt& a) {
        os << a.a;
        return os;
    }
    friend istream& operator>> (istream& is, newInt& a) {
        is >> a.a;
        return is;
    }

};
int main()
{
    int cases;
    newInt a, b, c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>a>>b;
        c = a + b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1829
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

