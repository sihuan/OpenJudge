#include <algorithm>
#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    int len_;
    T* mems_;

public:
    Array(int n)
        : len_(n)
        , mems_(new T[n])
    {
    }
    ~Array()
    {
        delete[] mems_;
    }
    int size()
    {
        return len_;
    }
    void put(int n)
    {
        sort(mems_, mems_ + len_, greater<T>());
        if (n > len_)
            n = len_;
        for (int i = 0; i < n; i++) {
            if (i)
                cout << " ";
            cout << mems_[i];
        }
        cout << endl;
    }
    T& operator[](int n)
    {
        return mems_[n];
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1280 kb
****************************************************************/

