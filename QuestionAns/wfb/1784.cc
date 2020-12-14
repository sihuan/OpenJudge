#include <iostream>

using namespace std;

class Array {
private:
    int len_;
    int *mems_;
public:
    friend ostream& operator<<(ostream& os,const Array& a);
    friend istream& operator>>(istream& is,Array& a);
    Array() : len_(0){}
    bool operator == (const Array& a) {
        if(len_ != a.len_) return false;
        for(int i=0; i<len_; ++i)
            if(mems_[i] != a.mems_[i])
                return false;
        return true;
    }
};
ostream& operator<<(ostream& os,const Array& a){
    for(int i=0; i<a.len_; ++i){
        if(i) os<<" ";
        os<<a.mems_[i];
    }
    return os;
}
istream& operator>>(istream& is,Array& a){
    is>>a.len_;
    a.mems_ = new int[a.len_];
    for(int i=0; i<a.len_; ++i){
        is>>a.mems_[i];
    }
    return is;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

