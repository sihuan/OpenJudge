#include <iostream>
using namespace std;
class Character
{
private:
    char c;
public:
    Character()
    {
        cout<<"Default constructor is called!"<<endl;
    }
    Character(char s)
    {
        cout<<"Character "<<s<<" is created!"<<endl;
        c = s;
    }
    void setCharacter(char x)
    {
        c = x;
    }
    int getAsciiCode(){return c;}
    char getCharacter(){return c;}
    ~Character()
    {
        cout<<"Character "<<c<<" is erased!"<<endl;
    }
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

