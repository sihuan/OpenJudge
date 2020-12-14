#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b) {
    return a > b;
}
template <class T>
class Array
{
public:
    T *a;
    int num;
public:
    Array(int l)
    {
        num=l;
        a=new T[l+1];
    }
    int size(){return num;}
    void put(int n)
    {
         for(int i=0;i<num;i++)
        for(int j=i+1;j<num;j++)
        if(a[i]<a[j])
       {
           T c=a[j];
           a[j]=a[i];
           a[i]=c;
       }

        if(n >= num)
       {
           int i;
           for(i=0;i<num-1;i++)
            cout<<a[i]<<" ";
           cout<<a[i]<<endl;
       }
       else
       {
           int i;
           for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
           cout<<a[i]<<endl;
       }

    }
    T& operator [](int p)  //woc 还有个引用
    {
        return a[p];
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:1784 ms
	Memory:1432 kb
****************************************************************/

