#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;
 void func()
 {
     cout<<"Number 0 0 0"<<endl;
 }
 void func(int a,int b)
 {
     cout<<"Number "<<a<<" "<<b<<" 0"<<endl;
 }
 int func(int a, int b, int c);


int main()
{
    int m;
    cin >> m;
    func();
    func(m, 100);
    func(m, 23, -5);
}

int func(int a, int b, int c)
{
    cout << "Number " << a << " " << b << " " << c << endl;
}

/**************************************************************
	Problem: 2488
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

