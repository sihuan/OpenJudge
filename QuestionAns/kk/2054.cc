#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

class Data
{
public:
    Data()
    {
        data=0;
        cout << "Data's default constructor." << endl;
    }
    Data(int d)
    {
        data=d;
        cout<< "Data "<<data<<" is created."<< endl;
    }
    int getValue()
    {
        return data;
    }
    void setValue(int d)
    {
        data=d;
    }
    ~Data()
    {
        cout<<"Data "<<data<<" is erased."<<endl;
    }
private:
    int data;
};
class DataArray
{
public:
    DataArray(int n,int d[])
    {
        sum=0;
        data = new Data [n];
        for(int i=0;i<n;i++)
        {
            sum+=d[i];
            data[i].setValue(d[i]);
        }
        cout<<"DataArray's constructor."<<endl;
    }
    void setValues(int d[])
    {
        for(int i=0;i<10;i++)
        {
            sum+=d[i];
            data[i].setValue(d[i]);
        }
    }
    int getSum()
    {
        return sum;
    }
    ~DataArray()
    {
        delete [] data;
        cout<<"DataArray's deconstructor."<<endl;
    }
private:
    int sum;
    int n;
    Data *data;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

