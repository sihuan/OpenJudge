#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;

 class Data
 {
 public:
     Data()
     {
         flag=-1;
         cout << "A default object is created." << endl;
     }
     Data(int in)
     {
         int_in=in;
         flag=0;
         cout << "An integer object " << int_in << " is created." << endl;
     }
     Data(double in)
     {
         double_in=in;
         flag=1;
         cout << "A double object " << double_in << " is created." << endl;
     }
     ~Data()
     {
         if(flag==-1)
            cout << "The default object is erased." << endl;
         if(flag==0)
            cout << "The integer object " << int_in << " is erased." << endl;
         if(flag==1)
            cout << "The double object " <<double_in << " is erased." << endl;
     }
 private:
     int int_in;
     double double_in;
     int flag;

 };
int main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}
/**************************************************************
	Problem: 2192
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

