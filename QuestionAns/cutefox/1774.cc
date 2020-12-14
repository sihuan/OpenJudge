#include<iostream>
#include<cmath>
using namespace std;
class Character
{
public:
    Character()
    {
        cout<<"Default constructor is called!"<<endl;
    }
    Character(char a)
    {
        va = a;
        cout<<"Character "<<va<<" is created!"<<endl;

    }
    void setCharacter(char a)
    {
        va = a;
    }
    int getAsciiCode()
    {
        return (int)(va);
    }
    char getCharacter()
    {
        return va;
    }
    ~Character()
    {
        cout<<"Character "<<va<<" is erased!"<<endl;
    }
private:
    char va;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

