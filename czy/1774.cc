#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;

class Character
{
private :
    char xx;
public:
    Character(){cout<<"Default constructor is called!"<<endl;}
    Character(char x)
    {
        xx=x;
        cout<<"Character "<<x<<" is created!"<<endl;
    }
    void setCharacter(char x){xx=x;}
     int getAsciiCode() {return (int)xx;}
     char getCharacter(){return xx;}
     ~Character()
     {
         cout<<"Character "<<xx<<" is erased!"<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

