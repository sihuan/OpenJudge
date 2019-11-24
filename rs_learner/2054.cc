#include<iostream>
using namespace std;
class Data
{
private:
    int t;
public:
    Data(){t=0;cout<<"Data's default constructor.\n";}
    ~Data(){cout<<"Data "<<t<<" is erased.\n";}
    int getValue(){return t;}
    void setValue(int a){t=a;}
};
class DataArray
{
private:
    int p;
    Data* q;
public:
    DataArray(int a,int *b)
    {
        p=a;
        q = new Data[p];
        for(int i=0;i<p;i++)
        {
            q[i].setValue(b[i]);
 
        }cout<<"DataArray's constructor.\n";
 
    }
    int getSum()
    {
        int sum=0;
        for(int i=0;i<p;i++)
            sum+=q[i].getValue();
            return sum;
    }
 
    ~DataArray(){delete []q;cout<<"DataArray's deconstructor.\n";}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

