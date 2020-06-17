#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Character {
        char ch;
public:
        Character() {cout << "Default constructor is called!" << endl;}
        Character(char c):ch(c) {cout << "Character " << c << " is created!" << endl;}
        ~Character () {cout << "Character " << ch << " is erased!" << endl;}
        void setCharacter (char c) {ch = c;}
        char getCharacter () {return ch;}
        int getAsciiCode () {return (int)ch;}
};

int main()
{
    char ch;
    Character ch1, ch2('a');
    cin>>ch;
    ch1.setCharacter(ch);
    cout<<"ch1 is "<<ch1.getCharacter()<<" and its ASCII code is "<<ch1.getAsciiCode()<<"."<<endl;
    cout<<"ch2 is "<<ch2.getCharacter()<<" and its ASCII code is "<<ch2.getAsciiCode()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1774
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

