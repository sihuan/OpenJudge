#include<iostream>
using namespace std;

class Character
{
    char x;
public:
    Character(char a):x(a) {}
    Character &toUpper()
    {
        if(x>=97&&x<=122)
            x=x-32;
        else
            x=x;
    }
    Character &toLower()
    {
        if(x>=65&&x<=90)
            x=x+32;
        else
            x=x;
    }
    void show()
    {
        cout<<x;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

