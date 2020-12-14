#include <iostream>
using namespace std;

class Character {
private:
    char c_;

public:
    Character(char a = 0)
        : c_(a)
    {
    }
    Character& operator+(int n)
    {
        int a = c_;
        a += n;
        while (a > 'z')
            a -= 26;
        while (a < 'a')
            a += 26;
        return *(new Character(a));
    }
    Character& operator-(int n)
    {
        int a = c_;
        a -= n;
        while (a > 'z')
            a -= 26;
        while (a < 'a')
            a += 26;
        return *(new Character(a));
    }
    friend ostream& operator<<(ostream& out, const Character& c)
    {
        out << c.c_;
        return out;
    }
    friend istream& operator>>(istream& in, Character& c)
    {
        in >> c.c_;
        return in;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

