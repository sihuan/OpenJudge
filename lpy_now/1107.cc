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
#define pi 3.14
using namespace std;

inline void Swap(double *x, double *y){
	double temp = *x;
	*x = *y, *y = temp;
}
inline void Swap(int *x, int *y){
	int temp = *x;
	*x = *y, *y = temp;
}
inline void Swap(int &x, int &y){
	int temp = x;
	x = y, y = temp;
}
inline void Swap(double &x, double &y){
	double temp = x;
	x = y, y = temp;
}
int main()
{
    int x1, y1;
     
    cin>>x1>>y1;
    Swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;
     
    cin>>x1>>y1;
    Swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;
 
    double x2, y2;
     
    cin>>x2>>y2;
    Swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;
     
    cin>>x2>>y2;
    Swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}
/**************************************************************
	Problem: 1107
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

