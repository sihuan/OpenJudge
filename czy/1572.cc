#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int *a;
    int num;
public:
    Array():a(NULL),num(0){}
    int size(){return num;}
    int get(int n)
    {
        num=n;
        a=new int[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
    }
    int operator [](int p)
    {
        return a[p];
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1424 kb
****************************************************************/

