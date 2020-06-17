#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
 
using namespace std;

class Data {
        int a;
public:
        Data (int n):a(n) {cout << "Data " << n << " is created." << endl;}
        Data () {a = 0; cout << "Data's default constructor." << endl;}
        ~Data () {cout << "Data " << a << " is erased." << endl;}
        int getValue () {return a;}
        void setValue (int n) {a = n;}
};

class DataArray {
        Data* arr;
        int num;
public:
        DataArray (int a, int* arrr) {
                arr = new Data[a];
                num = a;
                for (int i = 0; i < a; i++)
                        arr[i].setValue(arrr[i]);
                cout << "DataArray's constructor." << endl;}
        ~DataArray() {delete[] arr;cout << "DataArray's deconstructor." << endl;}
        void setValues(int* d) {
                for (int i = 0; i < num; i++) arr[i].setValue(d[i]);
        }
        int getSum () {int sum = 0; for (int i = 0; i < num; i++) sum+=arr[i].getValue(); return sum;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

