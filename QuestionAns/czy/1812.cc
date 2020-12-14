#include <iostream>
#include <string.h>
#include <iomanip>
#include<ctype.h>
using namespace std;

class Character
{
private:
    char ch;
public:
     Character(char chh = 'a') : ch(chh) {}
    friend Character operator+(Character &xx,int t)
    {
        int temp;
        temp=xx.ch+t;
        while(temp>'z') temp=temp-26;
        while(temp<'a') temp=temp+26;
        return temp;
    }
    friend Character operator-(Character &xx,int t)
    {
        int temp;
        temp=xx.ch-t;
        while(temp>'z') temp=temp-26;
        while(temp<'a') temp=temp+26;
        return temp;
    }
    friend istream & operator>>(istream &is,Character xxx)
    {
        is>>xxx.ch;
        return is;
    }
    friend ostream & operator<<(ostream &ou,const Character &xxx)
    {
        ou<<xxx.ch;
        return ou;
    }
};
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

