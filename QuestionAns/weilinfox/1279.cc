#include <iostream>
using namespace std;

int max(int a,int b)
{
        return a > b ? a : b;
}

double max(double a,double b)
{
        return a > b ? a : b;
}


int main()
{
	int a,b;
	double c,d;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	cin>>c>>d;
	cout<<max(c,d)<<endl;
	return 0;
}
/**************************************************************
	Problem: 1279
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

