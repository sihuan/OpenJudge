#include <iostream>

using namespace std;

class Data {
private:
    int d_;
public:
    Data() {d_=0; cout<<"Data's default constructor."<<endl;}
    Data(int d) {d_=d; cout<<"Data "<<d<<" is created."<<endl;}
    ~Data() {cout<<"Data "<<d_<<" is erased."<<endl;}
    int  getValue() {return d_;}
    void setValue(int d) {d_=d;}
};
class DataArray {
private:
    int len;
    Data *ds;
public:
    DataArray() {cout<<"DataArray's constructor."<<endl;}
    DataArray(int n,int d[]) {
        len = n;
        ds = new Data[n];
        for(int i=0; i<len; ++i) {
            ds[i].setValue(d[i]);
        }
        cout<<"DataArray's constructor."<<endl;
    }
    ~DataArray() {
        delete [] ds;
        cout<<"DataArray's deconstructor."<<endl;
    }
    void setValues(int d[10]) {
        for(int i=0; i<len; ++i) {
            ds[i].setValue(d[i]);
        }
    }
    int getSum() {
        int sum = 0;
        for(int i=0; i<len; ++i) {
            sum += ds[i].getValue();
        }
        return sum;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

