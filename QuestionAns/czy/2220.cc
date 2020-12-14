#include <bits/stdc++.h>

using namespace std;
class Overload
{
public:
    int a;
    char b;
    Overload():a(0),b('0')
    {
        cout<<"Default constructor is called to make a = "<<a<<", c = '"<<b<<"'."<<endl;
    }
    Overload(int aa):a(aa),b('0')
    {
        cout<<"First constructor is called to make a = "<<a<<", c = '"<<b<<"'."<<endl;
    }
    Overload(char bb):a(0),b(bb)
    {
        cout<<"Second constructor is called to make a = "<<a<<", c = '"<<b<<"'."<<endl;
    }
    Overload(int aa,char bb):a(aa),b(bb)
    {
        cout<<"Third constructor is called to make a = "<<a<<", c = '"<<b<<"'."<<endl;
    }

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

