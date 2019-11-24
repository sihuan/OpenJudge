#include <iostream>
#include <algorithm>
using namespace std;
template<typename T>//这里千万不要有分号；
class Array
{
private:
    T *ar;
    int length;
public:
    Array():ar(NULL),length(0) {}
//    Array(int i):length(i),ar(NULL) {}
    Array(int i):length(i){ar=new T[i+1];}//这里看清楚是如何给ar赋值的，既然有长度，就一定有数；
    int size()
    {
        return length;
    }
    void put(int n)
    {
        sort(ar,ar+length,greater<T>());//记住这里sort的用法；
        if(n>length)
        {
            for(int i=0; i<length; i++)
            {
                if(i==length-1)
                    cout<<ar[i]<<endl;
                else
                    cout<<ar[i]<<" ";
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(i==n-1)
                    cout<<ar[i]<<endl;
                else
                    cout<<ar[i]<<" ";
            }
        }
    }
    T& operator[](int n)
    {
        return ar[n];
    }
    ~Array(){if(ar!=NULL) delete[]ar;}//删除的条件一定要写；
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1280 kb
****************************************************************/

