#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#define ll long long

using namespace std;

class Character {
        char ch;
public:
        char operator+ (int i) {i %= 26; char c = this->ch + i; if (i>=0) return c > 'z' ? c - 'z' + 'a' - 1 : c; else return c < 'a' ? 'z' - ('a' - c) + 1 : c;}
        char operator- (int i) {i %= 26; char c = this->ch - i; if (i>=0) return c < 'a' ? 'z' - ('a' - c) + 1 : c; else return c > 'z' ? c - 'z' + 'a' - 1 : c;}
        friend ostream& operator << (ostream& os, Character& ch) {
                os << ch.ch;
                return os;
        }
        friend istream& operator >> (istream& is, Character& ch) {
                is >> ch.ch;
                return is;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

