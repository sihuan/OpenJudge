#include <iostream>
#include <iomanip>

using namespace std;

class Character {
    char x_;
public:
    Character(char x) {x_ = x;}
    Character toUpper() {
        if(x_>='a'&&x_<='z') {
            return Character(x_ + 'A'-'a');
        } else return Character(x_);
    }
    Character toLower() {
        if(x_>='A'&&x_<='Z') {
            return Character(x_ + 'a'-'A');
        } else return Character(x_);
    }
    void show() {cout<<x_;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

