
#include <iostream>
using namespace std;
class Array
{
public:
    int operator [](int y )
    {
        if(y < len)
        return a[y];
    }
public:
    void get( int n )
    {
        if( len != 0 )
            delete []a;
        len = n;
        a = new int [n + 1 ];
        for(int i = 0; i < n; i++ )
            cin >> a[i];
    }
    int size() const
    {
        return len;
    }
public:
    Array( ) : len(0) ,a(NULL){  }
private:
    int *a;
    int len;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1268 kb
****************************************************************/

