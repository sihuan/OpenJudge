#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

class STR{
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
    STR() : str_(NULL),len_(0){}
    STR(char* str) : str_(str),len_(strlen(str)) {}
    int length() const {return len_;}
    void putline() const {
        for(int i=0; i<len_; ++i)
            cout<<str_[i];
        cout<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1288 kb
****************************************************************/

