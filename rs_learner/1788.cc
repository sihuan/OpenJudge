#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <set>
#include <iomanip>

using namespace std;
template <typename T>

class Data
{
public:

	T value;
	Data()
	{
		value = (T)0;
	}
	Data(T v)
	{
		value = v;
	}
	bool operator < (const Data & rhs)
	{
		return value < rhs.value;
	}
	bool operator >(const Data & rhs)
	{
		return value > rhs.value;
	}
	Data operator + (const Data & rhs)
	{
		Data ans;
		ans.value = value + rhs.value;
		return ans;
	}
	void setValue(T v)
	{
		value = v;
	}
	friend ostream & operator << (ostream & os, const Data & d)
	{
		os << setprecision(2) << fixed << d.value;
		return os;
	}
};

template <typename T>
class GetResult
{
public:

	static Data<T> getSum(Data<T> * arr, int num)
	{
		Data<T> ans;
		for (int i = 0; i < num; i++)
		{
			ans = ans + arr[i];
		}
		return ans;
	}
	static Data<T> getMax(Data<T> * arr, int num)
	{
		Data<T> ans;
		ans.value = arr[0].value;
		for (int i = 0; i < num; i++)
		{
			if (ans < arr[i])
				ans.value = arr[i].value;
		}
		return ans;
	}
	static Data<T> getMin(Data<T> * arr, int num)
	{
		Data<T> ans;
		ans.value = arr[0].value;
		for (int i = 0; i < num; i++)
			if (ans > arr[i])
				ans.value = arr[i].value;
		return ans;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1272 kb
****************************************************************/

