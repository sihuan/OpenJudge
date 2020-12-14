#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.141
using namespace std;

class Data{
	public:
		Data(double d_number){
			number = d_number;
		}
		double getValue(){
			return number;
		}
		void showValue(){
			cout << number << "\n";
		}
	private:
		double number;
};
int main()
{
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2049
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

