#include<iostream>
using namespace std;
class Char
{
public:
    char a;
    Char(char s)
    {
        a=s;
    }
    char change()
    {
        if(a>='a'&&a<='z')
            return a = a-'a'+'A';
        if(a>='A'&&a<='Z')
            return a = a-'A'+'a';
        return a;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

