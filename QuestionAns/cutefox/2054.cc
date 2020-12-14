#include <iostream>

using namespace std;
class Data
{
private:
    int d;
public:
    Data()
    {
        d=0;
        cout<<"Data's default constructor."<<endl;
    }
    ~Data()
    {
        cout<<"Data "<<d<<" is erased."<<endl;
    }
    int getValue()
    {
        return d;
    }
    void setValue(int a)
    {
        d=a;
    }
};
class DataArray
{
private:
    int da;
    Data *t;
public:
    DataArray(int n,int *tmp)
    {da=n;
        int i;
        t=new Data[n];
        for(i=0; i<n; i++)
        {
            t[i].setValue(tmp[i]);
        }

        cout<<"DataArray's constructor."<<endl;
    }
    int getSum()
    {
        int i,sum=0;
        for(i=0; i<da; i++)
        {
            sum+=t[i].getValue();
        }
        return sum;
    }
    ~DataArray()
    {
        delete []t;
        cout<<"DataArray's deconstructor."<<endl;
    }
};
int main()
{
    int i, n;
    Data test, *testP;
    cin>>n;
    int tmp[n];
    for (i = 0; i < n; i++)
        cin>>tmp[i];
    DataArray datas(n, tmp);
    cout<<"Sum is "<<datas.getSum()<<endl;
    testP = new Data;
    cin>>n;
    testP->setValue(n);
    delete testP;
    return 0;
}
/**************************************************************
	Problem: 2054
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

