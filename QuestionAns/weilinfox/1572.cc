#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class Array {
    int *arr;
    int siz;
public:
    Array () {siz = 0;}
    void get (int a) {
        arr = new int[a];
        siz = a;
        for (int i = 0; i < a; i++)
            cin >> arr[i];
    }
    int size () {return siz;}
    int operator[] (int i) {
        return arr[i];
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1424 kb
****************************************************************/

