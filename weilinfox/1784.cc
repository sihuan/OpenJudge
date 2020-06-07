#include <iostream>
#include <cstdlib>
#include <iomanip>

#define ll long long

using namespace std;

ll gdb (ll a, ll b)
{
        return b == 0 ? a : gdb(b, a%b);
}

class Array {
        int length;
        int *mems;
public:
        Array ():length(0), mems(NULL) {}
        bool operator== (Array& a) {
                if (this == &a) return true;
                else if (this->length != a.length) return false;
                else {
                        for (int i = 0; i < a.length; i++)
                                if ((this->mems)[i] != (a.mems)[i]) {
                                        return false;
                                }
                        return true;
                }
        }
        friend istream& operator>> (istream&, Array&);
        friend ostream& operator<< (ostream&, Array&);
};

istream& operator>> (istream& is, Array& a)
{
        is >> a.length;
        (a.mems) = new int[a.length];
        for (int i = 0; i < a.length; i++) is >> (a.mems)[i];
        return is;
}

ostream& operator<< (ostream& os, Array& a)
{
        for (int i = 0; i < a.length; i++)
                if (i) os << ' ' << (a.mems)[i];
                else os << (a.mems)[i];
        return os;
}


int main()
{
    int cases;
    cin>>cases;
    Array arraies[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>arraies[i];
    }
    cout<<arraies[0]<<endl;
    for (int i = 1; i < cases; i++)
    {
        if (arraies[i] == arraies[i - 1])
        {
            cout<<arraies[i]<<" "<<"equal to above."<<endl;
        }
        else
        {
            cout<<arraies[i]<<" "<<"unequal to above."<<endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1784
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

