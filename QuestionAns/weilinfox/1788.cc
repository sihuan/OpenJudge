#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <iomanip>
#include <stack>
#include <sstream>
#include <cstdio>

using namespace std;

template <class T>
class Data {
    T value;
public:
    Data(T n=0):value(n) {}
    ~Data() {}
    void setValue (T n) {value = n;}
    T getValue () {return value;}
    //int size () {return num;}
    bool operator < (Data& d) {
        return this->value < d.value;
    }
    bool operator > (Data& d) {
        return this->value > d.value;
    }
    T operator + (Data& d) {
        return this->value + d.value;
    }
    friend ostream& operator << (ostream& os, Data<T> d) {
        os << setprecision(2) << fixed << d.value;
        return os;
    }
};

template <class T>
class GetResult {
public:
    static Data<T> getSum(Data<T> *arr, int num) {
        T sum = 0;
        Data<T> d;
        for (int i = 0; i < num; i++) sum += arr[i] + d;
        d.setValue(sum);
        return d;
    }
    static Data<T> getMax(Data<T> *arr, int num) {
        T maxx;
        Data<T> d;
        maxx = arr[0].getValue();
        for (int i = 1; i < num; i++) maxx = max(maxx, arr[i].getValue());
        d.setValue(maxx);
        return d;
    }
    static Data<T> getMin(Data<T> *arr, int num) {
        T maxx;
        Data<T> d;
        maxx = arr[0].getValue();
        for (int i = 1; i < num; i++) maxx = min(maxx, arr[i].getValue());
        d.setValue(maxx);
        return d;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

