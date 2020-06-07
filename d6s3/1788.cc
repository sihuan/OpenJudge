#include <iomanip>
#include <iostream>
using namespace std;

template <class T>
class Data {
private:
    T value_;

public:
    Data()
        : value_(0)
    {
    }
    Data(T x)
        : value_(x)
    {
    }
    void setValue(T x)
    {
        value_ = x;
    }
    T value()
    {
        return value_;
    }
    bool operator<(const Data& d)
    {
        if (value_ < d.value_)
            return true;
        return false;
    }
    bool operator>(const Data& d)
    {
        if (value_ > d.value_)
            return true;
        return false;
    }
    friend Data operator+(const Data& x, const Data& y)
    {
        return x.value_ + y.value_;
    }
    friend ostream& operator<<(ostream& os, const Data& x)
    {
        os << setprecision(2) << fixed << x.value_;
        return os;
    }
};

template <class T>
class GetResult {
public:
    static Data<T> getSum(Data<T>* ar, int n)
    {
        Data<T> s;
        for (int i = 0; i < n; i++)
            s = s + ar[i];
        return s;
    }
    static Data<T> getMax(Data<T>* ar, int n)
    {
        Data<T> max;
        max.setValue(ar[0].value());
        for (int i = 0; i < n; i++)
            if (max < ar[i])
                max.setValue(ar[i].value());
        return max;
    }
    static Data<T> getMin(Data<T>* ar, int n)
    {
        Data<T> min;
        min.setValue(ar[0].value());
        for (int i = 0; i < n; i++)
            if (min > ar[i])
                min.setValue(ar[i].value());
        return min;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1272 kb
****************************************************************/

