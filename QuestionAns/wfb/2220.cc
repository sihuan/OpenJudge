#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

class Overload{
public:
    Overload(int i,char ch) : i_(i),ch_(ch){cout<<"Third constructor is called to make a = "<<i_<<", c = '"<<ch_<<"'."<<endl;}
    Overload(char ch) : ch_(ch) {cout<<"Second constructor is called to make a = 0, c = '"<<ch_<<"'."<<endl;}
    Overload(int i) : i_(i) {cout<<"First constructor is called to make a = "<<i_<<", c = '0'."<<endl;}
    Overload() {cout<<"Default constructor is called to make a = 0, c = '0'."<<endl;}
private:
    int i_;
    char ch_;
};
int main()
{
    int i;
    char ch;
    cin>>i>>ch;
    Overload t1, t2(i), t3(ch), t4(i, ch);
    return 0;
}
/**************************************************************
	Problem: 2220
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

