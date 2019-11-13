#include <iostream>
#include <cstdio>

using namespace std;

class Char{
public:
    Char(char ch) : ch_(ch) {}
    char change() const {
        char tmp;
        if(ch_>='A' && ch_<='Z')
            tmp = ch_-'A'+'a';
        else if(ch_>='a' && ch_<='z')
            tmp = ch_-'a'+'A';
        else tmp = ch_;
        return tmp;
    }
private:
    char ch_;
};
int main()
{
    char ch;
    while(cin>>ch)
    {
        Char c(ch);
        cout<<c.change()<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2091
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

