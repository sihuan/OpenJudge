#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
#include <cstdio>
using namespace std;
int rec=0;
class  STR
{
private:
    char *a;
public:
    STR()
    {
         a=new char[1];
        a[0]=0;
    }
    int length()
    {
        int i=0;
        while(a[i++]!=0);
        return i-1;
    }
    STR(const char *p)
    {
        int i=0;
        while(p[i++]!=0);
         a=new char[i];
        for(i=0;p[i]!=0;++i)
        {
            a[i]=p[i];
        }
        a[i]=0;
    }
    void putline()
    {
        cout<<a<<endl;
    }
};

int main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}

/**************************************************************
	Problem: 1578
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1292 kb
****************************************************************/

