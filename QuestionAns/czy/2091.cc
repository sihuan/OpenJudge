#include "bits/stdc++.h"
using namespace std;



class Char
{
protected:
    char c;
public:
    Char(char s):c(s){}
    char change()
    {
        if(islower(c)) return c-'a'+'A';
        else if(isupper(c)) return c-'A'+'a';
        else return c;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

