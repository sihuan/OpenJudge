#include <iostream>

using namespace std;

class Character {
private:
    char c_;
public:
    Character(char c) :c_(c) {}
    Character() {}
    friend istream& operator>>(istream &is,Character &c);
    friend ostream& operator<<(ostream &os,const Character& c);
    Character operator+ (int n) {char c=c_+(n%26); while(c<'a')c+=26;while(c>'z')c-=26; return Character(c);}
    Character operator- (int n) {char c=c_-(n%26); while(c>'z')c-=26;while(c<'a')c+=26; return Character(c);}
};
istream& operator>>(istream &is,Character &c)
{
    is>>c.c_;
    return is;
}
ostream& operator<<(ostream &os,const Character& c)
{
    os<<c.c_;
    return os;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

