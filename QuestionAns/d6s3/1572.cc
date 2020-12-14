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
    int size()
    {
        return len_;
    }
    void get(int n)
    {
        mems_ = new int[n];
        len_ = n;
        for (int i = 0; i < n; i++)
            cin >> mems_[i];
    }
    int operator[](int n)
    {
        return mems_[n];
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1424 kb
****************************************************************/

