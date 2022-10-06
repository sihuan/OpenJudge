#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;

class Character
{
public:
    Character(char in_ch)
    {
        ch=in_ch;
    }
    void show()
    {
        cout << ch;
    }
    Character toUpper()
    {
        ch=toupper(ch);
        return *this;
    }
    Character toLower()
    {
        ch=tolower(ch);
        return *this;
    }
private:
    char ch;
};
int main()
{
    int cases;
    char c;
    cin>>cases;
    cout<<"char"<<" upper"<<" lower"<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>c;
        Character character(c);
        character.show();
        cout<<"    ";
        character.toUpper().show();
        cout<<"     ";
        character.toLower().show();
        cout<<endl;
    }
}
/**************************************************************
	Problem: 1817
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

