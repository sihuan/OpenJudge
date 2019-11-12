#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Data
{
public:
    T value;
public:
    Data(){value = (T)0;}
    Data(T x):value(x){}
    bool operator < (const Data & t)
    {
        if(value < t.value)
            return true;
        else
            return false;
    }
    bool operator > (const Data & t)
    {
        if(value > t.value)
            return true;
        else
            return false;
    }
    friend ostream &operator << (ostream &os,const Data & x)
    {
        os << setprecision(2) << fixed << x.value;
        return os;
    }
    Data operator + (const Data & x)
    {
        return value + x.value;
    }
    void setValue(T x)
    {
        value =  x;
    }
//friend class GetResult;
};
template<typename T>
class GetResult
{
//friend class Data;
public:
     static Data<T> getSum(Data<T> *arr, int num)
     {
          Data<T> sum;
          for(int i = 0;i < num;i++)
          {
              sum = sum +arr[i];
          }
          return sum;
     }
     static Data<T> getMax(Data<T> * arr, int num)
     {
         Data<T> maxx;
         maxx.value = arr[0].value;
         for(int i = 0;i < num;i++)
         {
             if(maxx < arr[i])
             {
                 maxx.value = arr[i].value;
             }
         }
         return maxx;
     }
    static Data<T> getMin(Data<T> * arr, int num)
     {
         Data<T> minn;
            minn.value = arr[0].value;
         for(int i = 0;i < num;i++)
         {
             if(minn > arr[i])
             {
                 minn.value = arr[i].value;
             }
         }
         return minn;
     }
};
int main()
{
    Data<int> iData[1001];
    Data<double> dData[1001];
    int cases, num;
    char ch;
    int u;
    double v;
    Data<int> a(10), b(20);
    Data<double> c(3.14), d(-4.1);
    cout<<"a + b = "<<(a + b)<<endl;
    cout<<"max(a, b) = "<<(a > b ? a : b)<<endl;
    cout<<"min(a, b) = "<<(a < b ? a : b)<<endl;
    cout<<"c + d = "<<(c + d)<<endl;
    cout<<"max(c, d) = "<<(c > d ? c : d)<<endl;
    cout<<"min(c, d) = "<<(c < d ? c : d)<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            if (ch == 'i')
            {
                cin>>u;
                iData[j].setValue(u);
            }
            else if (ch == 'd')
            {
                cin>>v;
                dData[j].setValue(v);
            }
        }
        if (ch == 'i')
        {
            cout<<GetResult<int>::getMax(iData, num);
            cout<<" "<<GetResult<int>::getMin(iData, num);
            cout<<" "<<GetResult<int>::getSum(iData, num)<<endl;
        }
        else if (ch == 'd')
        {
            cout<<GetResult<double>::getMax(dData, num);
            cout<<" "<<GetResult<double>::getMin(dData, num);
            cout<<" "<<GetResult<double>::getSum(dData, num)<<endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1788
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

