
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace::std;
 
int len(const char *a)
{
    int i;
    for(i=0;a[i];i++);
    return i;
}
void cpy(char *a,const char *b)
{
    int i;
    for(i=0;b[i];i++)
        a[i]=b[i];
    a[i]=0;
}
 
class STR
{
private:
    int len_, siz_;
    char *s_;
public:
    STR() : len_(0), siz_(0), s_(NULL) { }
    STR(const char* str) : len_(len(str)), siz_(2 * len_)
    {
        s_ = new char[siz_];
        cpy(s_, str);
    }
    ~STR() { delete[] s_; }
 
    void putline() const
    {
        for(int i=0;i<len_;i++)
            cout<<s_[i];
        cout << endl;
    }
 
    int length() { return len_; }
 
    friend STR operator+(const STR& s, const STR& t)
    {
        STR res;
        res.len_ = s.len_ + t.len_;
        res.siz_ = res.len_ * 2;
        res.s_ = new char[res.siz_];
        int i;
        for(i = 0; i < s.len_; i++)
            res.s_[i] = s.s_[i];
        for(int j = i; j <= i + t.len_; j++)
            res.s_[j] = t.s_[j - s.len_];
        return res;
    }
 
    STR& operator+=(const STR& s)
    {
        int len = len_ + s.len_;
        siz_ = len * 2;
        char *str = new char[siz_];
        for(int i = 0; i < len_; i++)
            str[i] = s_[i];
        for(int i = len_; i <= len; i++)
            str[i] = s.s_[i - len_];
        delete[] s_;
        s_ = str;
        len_ = len;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:2024 kb
****************************************************************/

