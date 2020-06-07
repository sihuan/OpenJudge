#include <cctype>
#include <iostream>
using namespace std;

class Character {
private:
    char c_;

public:
    Character(char c)
        : c_(c)
    {
    }
    Character toUpper()
    {
        return Character(toupper(c_));
    }
    Character toLower()
    {
        return Character(tolower(c_));
    }
    void show()
    {
        cout << c_;
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

