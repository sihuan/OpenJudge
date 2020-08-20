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
		int N;
		Data *num;
	public:
		DataArray(int n, int *a){
			N = n;
			num = new Data[N];
			for(int i = 0; i < N; ++ i){
				num[i].setValue(a[i]);
			}
			cout << "DataArray's constructor.\n";
		}
		int getSum(){
			int sum = 0;
			for(int i = 0; i < N; ++ i){
				sum += num[i].getValue();
			}
			return sum;
		}
		~DataArray(){
			delete []num;
			cout << "DataArray's deconstructor.\n";
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

