#include<iostream>
#include<cstring>
using namespace std;
class Array
{
private:
    int *a;
    int lenth;
public:
    Array(){lenth=0;}
    ~Array(){delete []a;}
    void get(int n)
    {
        a=new int[n];
        lenth=n;
        int i,b;
        for(i=0;i<lenth;i++)
        {
            cin>>b;
            a[i]=b;
        }
    }
    int size()
    {
        return lenth;
    }
    int &operator[](int n)
    {
        return a[n];
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1424 kb
****************************************************************/

