#include <iostream>
using namespace std;
class Character
{
public:
    friend istream & operator>>( istream & is,Character & c);
    char a;
    char operator+(const int&n)const
    {
        return (a+n%26-'a'+26)%26+'a';
    }
    char operator-(const int&n)const
    {
       return (a-n%26-'a'+26)%26+'a';
    }
};
istream & operator>>( istream & is,Character & c)
{
    char tmp;
    is>>tmp;
    c.a=tmp;
    return is;
}
int main()
{
    int cases, data;
    Character ch;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>data;
        cout<<(ch + data)<<" "<<(ch - data)<<endl;
    }
}
/**************************************************************
	Problem: 1812
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

