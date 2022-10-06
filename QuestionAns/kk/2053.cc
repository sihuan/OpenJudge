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
    DataArray()
    {
        sum=0;
        cout<<"DataArray's default constructor."<<endl;
    }
    void setValues(int d[10])
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
        cout<<"DataArray's deconstructor."<<endl;
    }
private:
    int sum;
    Data data[10];
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

