#include <iostream>
#include "iomanip"

using namespace std;

class Data
{

    private:
        int x;
    public:
        Data(){x=0;cout<<"Data's default constructor."<<endl;}
        Data(int xx)
        {
            x=xx;
            cout<<"Data "<<x<<" is created."<<endl;
        }
          ~Data()
          {
                cout<<"Data "<<x<<" is erased."<<endl;
          }
    int getValue() {return x;}
    void setValue(int xx) {x=xx;}
    friend class DataArray;
};

class DataArray
{

private:
    Data a[10];
public:
    DataArray(){cout<<"DataArray's default constructor."<<endl;}
     void setValues(int d[10])
     {
         for(int i=0;i<10;++i)
         {
             a[i].setValue(d[i]);
         }
     }
     int getSum()
     {
         int sum=0;
         for(int i=0;i<10;++i)
         {
             sum=sum+a[i].getValue();
         }
         return sum;
     }
     ~DataArray()
     {
         cout<<"DataArray's deconstructor."<<endl;
     }
     friend class Data;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

