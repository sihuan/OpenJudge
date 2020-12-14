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
        Data arr[10];
public:
        DataArray () {cout << "DataArray's default constructor." << endl;}
        ~DataArray() {cout << "DataArray's deconstructor." << endl;}
        void setValues(int d[10]) {
                for (int i = 0; i < 10; i++) arr[i].setValue(d[i]);
        }
        int getSum () {int sum = 0; for (int i = 0; i < 10; i++) sum+=arr[i].getValue(); return sum;}
};


int main()
{
    DataArray dataArray;
    Data *aData;
    int data[10], tmp;
    int i;
    for (i = 0; i < 10; i++){
        cin>>data[i];
    }
    dataArray.setValues(data);
    cout<<"Sum is "<<dataArray.getSum()<<endl;

    cin>>tmp;
    aData = new Data(tmp);
    cout<<"aData = "<<aData->getValue()<<endl;
    delete aData;
    return 0;
}

/**************************************************************
	Problem: 2053
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

