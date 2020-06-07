#include <iostream>
using namespace std;

class Array {
private:
    int len_;
    int* mems_;

public:
    Array()
        : len_(0)
        , mems_(NULL)
    {
    }
    ~Array()
    {
        delete[] mems_;
    }
    bool operator==(const Array& a)
    {
        if (len_ != a.len_)
            return false;
        for (int i = 0; i < len_; i++)
            if (mems_[i] != a.mems_[i])
                return false;
        return true;
    }
    friend ostream& operator<<(ostream& out, Array& a)
    {
        for (int i = 0; i < a.len_; i++)
            if (i)
                out << " " << a.mems_[i];
            else
                out << a.mems_[i];
        return out;
    }
    friend istream& operator>>(istream& in, Array& a)
    {
        in >> a.len_;
        a.mems_ = new int[a.len_];
        for (int i = 0; i < a.len_; i++)
            in >> a.mems_[i];
        return in;
    }
};
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

