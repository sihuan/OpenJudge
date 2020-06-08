#include<iostream>
using namespace std;
class Data
{
public:
    int value;
    Data()
    {
        value=0;
        cout<<"Data's default constructor."<<endl;
    }
    Data(int a)
    {
        value=a;
        cout<<"Data "<<value<<" is created."<<endl;
    }
    ~Data()
    {
        cout<<"Data "<<value<<" is erased."<<endl;
    }
    int getValue()
    {
        return value;
    }
    void setValue(int a)
    {
        value=a;
    }
};
class DataArray
{
    public:
   static int sum;
    Data arr[10];
    DataArray()
    {
        cout<<"DataArray's default constructor."<<endl;
    }
    void setValues(int d[10])
    {
        for(int i=0;i<10;i++){
            arr[i].value=d[i];
            sum=sum+d[i];
        }
    }
    int getSum(){
        return sum;
    }
    ~DataArray(){
    cout<<"DataArray's deconstructor."<<endl;
    }

};
int DataArray::sum=0;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

