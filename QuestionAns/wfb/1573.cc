#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>

using namespace std;

template<class T>
class Array{
//    friend istream& operator>>(istream& is,T& a[i]) {
//        is>>arr_[i];
//        return is;
//    }
private:
    T *arr_;
    int n_;
public:
    Array() : n_(0) {}
    Array(int l) : n_(l) {arr_=new T[l];}
    int size() const {return n_;}
    void get(int n){
        arr_ = new T[n];
        n_ = n;
        for(int i=0; i<n; ++i)
            cin>>arr_[i];
    }
//    bool compare(T a,T b) {return a>b;}
    void put(int n) const {
        T *tmp = new T[n_];
        for(int i=0; i<n_; ++i)
            tmp[i] = arr_[i];
        sort(tmp,tmp+n_,greater<T>());
        for(int i=0; i<(n_>n?n:n_); ++i){
            if(i) cout<<" ";
            cout<<tmp[i];
        }
        cout<<endl;
    }
    T& operator[](int i) {return arr_[i];}
};
int main()
{
    int cases, len;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        cin >> len;
        if(ca % 3 == 0)
        {
            Array<char> chr_arr(len);
            for(int i = 0; i < chr_arr.size(); i++)
                cin >> chr_arr[i];
            chr_arr.put(10);
        }
        if(ca % 3 == 1)
        {
            Array<int> int_arr(len);
            for(int i = 0; i < int_arr.size(); i++)
                cin >> int_arr[i];
            int_arr.put(10);
        }
        if(ca % 3 == 2)
        {
            Array<double> dbl_arr(len);
            for(int i = 0; i < dbl_arr.size(); i++)
                cin >> dbl_arr[i];
            dbl_arr.put(10);
        }
    }
}

/**************************************************************
	Problem: 1573
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:44 ms
	Memory:1604 kb
****************************************************************/

