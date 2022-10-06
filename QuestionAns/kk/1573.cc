#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdio>
#include <functional>

using namespace std;

template<class T>
class Array
{
public:
    Array(int l)
    {
        len=l;
        arr=new T [l];
    }
    int size()
    {
        return len;
    }
    void put(int l)
    {
        sort(arr,arr+len,greater<T>());
        if(l>=len)
            l=len;
        for(int i=0;i<l;i++)
        {
            if(i==0)
                cout<<arr[i];
            else
                cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    T& operator [](int i)
    {
        return arr[i];
    }
private:
    T* arr;
    int len;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1440 kb
****************************************************************/

