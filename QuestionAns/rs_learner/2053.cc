#include<iostream>
using namespace std;
class Data
{
    private:
        int a;
    public:
        Data(){a=0;cout<<"Data's default constructor."<<endl;}
        Data(int x):a(x){cout<<"Data "<<a<<" is created."<<endl;}
        ~Data(){cout<<"Data "<<a<<" is erased."<<endl;}
        void setValue(int x){a=x;}
        int getValue(){return a;}
};
class DataArray
{
    private:
        Data data[10];
    public:
        DataArray(){cout<<"DataArray's default constructor."<<endl;}
        ~DataArray(){cout<<"DataArray's deconstructor."<<endl;}
        void setValues(int x[10])
        {
            int j;
            for(j=0;j<=9;j++)
            {
                data[j].setValue(x[j]);
            }
        }
        int getSum()
        {
            int sum=0;
            int j;
            for(j=0;j<=9;j++)
            {
                sum+=data[j].getValue();
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

