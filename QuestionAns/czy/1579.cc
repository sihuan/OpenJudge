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
     friend STR &operator +( STR aa,  STR bb)
    {
        STR sam;
        int l1,l2;
        for(l1=0; aa.a[l1]!=0; l1++) ;
        for(l2=0; bb.a[l2]!=0; l2++) ;
        sam.a = new char[l1+l2+1];
        for(int i=0; i<l1; i++)
            sam.a[i] = aa.a[i];
        for(int i=0; i<l2; i++)
            sam.a[i+l1] = bb.a[i];
        sam.a[l1+l2] = 0;
        return sam;
    }
    friend STR  &operator +=(STR &a, STR &b)
    {
         int i,l1;
         for(l1=0; a.a[l1]!=0; l1++) ;
         for(i=0; b.a[i]!=0; i++)
            a.a[i+l1] = b.a[i];
         a.a[l1+i] = 0;
         return a;
    }

};

int main()
{
    STR e;
    STR h("Hello World!");
    STR he = e + h;
    cout << he.length() << " ";
    he.putline();
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    e += h;
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();

    char s1[100001], s2[100001];
    while(gets(s1) != NULL && gets(s2) != NULL)
    {
        STR str1(s1), str2(s2);
        STR str = str1 + str2;
        cout << str.length() << " ";
        str.putline();
        cout << str1.length() << " ";
        str1.putline();
        cout << str2.length() << " ";
        str2.putline();
        str2 += str1;
        cout << str2.length() << " ";
        str2.putline();
        cout << str1.length() << " ";
        str1.putline();
    }
}

/**************************************************************
	Problem: 1579
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1604 kb
****************************************************************/

