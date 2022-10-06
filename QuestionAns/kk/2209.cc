#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Array
{
public:
    Array(){}
    Array operator -(int a)
    {
        int i=0;
        while(i<length)
        {
            if(arr[i]!=a)
                i++;
            else
            {
                for(int j=i;j<length-1;j++)
                    arr[j]=arr[j+1];
                length--;
            }
        }
        return *this;
    }
    friend istream& operator >>(istream&,Array&);
    friend ostream& operator <<(ostream&,Array&);
private:
    int *arr;
    int length;
};
istream& operator >>(istream& is,Array& arr)
{
    cin>>arr.length;
        arr.arr=new int [arr.length];
    for(int i=0;i<arr.length;i++)
    {
        is>>arr.arr[i];
    }
    return is;
}
ostream& operator <<(ostream& os,Array& arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if(i==arr.length-1)
            os<<arr.arr[i]<<endl;
        else
            os<<arr.arr[i]<<" ";
    }
    return os;
}
int main()
{
    int a;
    Array arr;
    cin>>arr;
    cout<<arr;
    cin>>a;
    arr = arr - a;
    cout<<arr;
    return 0;
}

/**************************************************************
	Problem: 2209
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:20 ms
	Memory:1268 kb
****************************************************************/

