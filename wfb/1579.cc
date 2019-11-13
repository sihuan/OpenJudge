#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

class STR{
friend STR operator+ (const STR&,const STR&);
private:
    char *str_;
    int len_;
    int strlen(char *str_) {
        int i = 0;
        while(str_[i])
            ++i;
        return i;
    }
public:
    STR() : len_(0){char *str = new char[1]; str[0]='\0'; str_=str;}
    STR(char* str) : str_(str),len_(strlen(str)) {}
    int length() const {return len_;}
    void putline() const {
        for(int i=0; i<len_; ++i)
            cout<<str_[i];
        cout<<endl;
    }
    void operator +=(const STR& a) {
        char *sum = new char[len_+a.length()+1];
        int index = 0;
        for(int i=0; i<len_; ++i) {
            sum[index++] = str_[i];
        }
        for(int i=0; i<a.len_; ++i) {
            sum[index++] = a.str_[i];
        }
        sum[index] = '\0';
        str_ = sum;
        len_ += a.len_;
    }
};
STR operator+ (const STR& a,const STR& b) {
    char *sum = new char[a.length()+b.length()+1];
    int index = 0;
    for(int i=0; i<a.length(); ++i) {
        sum[index++] = a.str_[i];
    }
    for(int i=0; i<b.length(); ++i) {
        sum[index++] = b.str_[i];
    }
    sum[index] = '\0';
    STR c(sum);
    return c;
}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1604 kb
****************************************************************/

