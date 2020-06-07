#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>

using namespace std;

class Char {
    char ch;
public:
    Char (char c):ch(c) {}
    char change() {
        if (isupper(ch)) return tolower(ch);
        else return toupper(ch);
    }
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

