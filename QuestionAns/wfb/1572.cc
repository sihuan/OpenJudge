#include <iostream>
#include <iomanip>

using namespace std;

class Array{
private:
    int *arr_;
    int n_;
public:
    Array() : n_(0) {}
    int size() const {return n_;}
    void get(int n){
        arr_ = new int[n];
        n_ = n;
        for(int i=0; i<n; ++i)
            cin>>arr_[i];
    }
    int operator [](int i) const {return arr_[i];}
};
int main()
{
    int cases;
    Array arr;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        int len;
        cin >> len;
        arr.get(len);
        for(int i = 0; i < arr.size(); i++)
            if(i + 1 == arr.size())
                cout << arr[i];
            else
                cout << arr[i] << " ";
        cout << endl;
    }
}

/**************************************************************
	Problem: 1572
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1424 kb
****************************************************************/

