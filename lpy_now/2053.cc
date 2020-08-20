#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Data{
	private:
		int number;
	public:
		Data(){
			number = 0;
			cout << "Data's default constructor.\n";
		}
		Data(int n){
			number = n;;
			cout << "Data " << number << " is created.\n";
		}
		~Data(){
			cout << "Data " << number << " is erased.\n";
		}
		int getValue(){
			return number;
		}
		void setValue(int n){
			number = n;
		}
};
class DataArray{
	private:
		Data D[10];
	public:
		DataArray(){
			cout << "DataArray's default constructor.\n";
		}
		void setValues(int d[10]){
			for(int i = 0; i < 10; ++ i){
				D[i].setValue(d[i]);
			}
		}
		int getSum(){
			int sum = 0;
			for(int i = 0; i < 10; ++ i){
				sum += D[i].getValue();
			}
			return sum;
		}
		~DataArray(){
			cout << "DataArray's deconstructor.\n";
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

