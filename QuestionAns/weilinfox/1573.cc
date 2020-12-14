#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <iomanip>
#include <stack>
#include <sstream>
#include <cstdio>

using namespace std;

template <class T>
class Array {
    T* arr;
    int num;
public:
    Array(int n):num(n) {arr = new T[n];}
    ~Array() {delete arr;}
    int size () {return num;}
    void put (int n) {
        sort(arr, arr+num);
        for (int i = num-1; i >= 0 && i >= num-n; i--)
            if (i == num-1) cout << arr[i];
            else cout << ' ' << arr[i];
        cout << endl;
    }
    T& operator[] (int n) {
        return arr[n];
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:36 ms
	Memory:1276 kb
****************************************************************/

