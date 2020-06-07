#define A <str ## ing>
#include A
#define B str##ing
#include <cstdio>
#include <iostream>
using namespace std;

class STR {
private:
    B str_;

public:
    STR(const char* str)
    {
        str_ = str;
    }
    STR()
    {
        str_ = "";
    }
    int length() const
    {
        return str_.length();
    }
    void putline()
    {
        cout << str_ << endl;
    }
    STR operator+(const STR& s)
    {
        STR tmp;
        tmp.str_ = str_ + s.str_;
        return tmp;
    }
    STR& operator+=(const STR& s)
    {
        str_ += s.str_;
        return *this;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1812 kb
****************************************************************/

