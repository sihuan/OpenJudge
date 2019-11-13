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
    Data ds[10];
public:
    DataArray() {cout<<"DataArray's default constructor."<<endl;}
    ~DataArray() {cout<<"DataArray's deconstructor."<<endl;}
    void setValues(int d[10]) {
        for(int i=0; i<10; ++i) {
            ds[i].setValue(d[i]);
        }
    }
    int getSum() {
        int sum = 0;
        for(int i=0; i<10; ++i) {
            sum += ds[i].getValue();
        }
        return sum;
    }
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

