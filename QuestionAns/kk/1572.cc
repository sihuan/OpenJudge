#include <iostream>
#include <cstdio>

using namespace std;

class Array
{
public:
    Array(){}
    int size()
    {
        return len;
    }
    void get(int n)
    {
        len=n;
        arr=new int [n];
        for(int i=0;i<len;i++)
            cin>>arr[i];
    }
    int operator [](int index);
private:
    int *arr;
    int len;
};
int Array::operator[](int n)
{
    return arr[n];
}
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1424 kb
****************************************************************/

