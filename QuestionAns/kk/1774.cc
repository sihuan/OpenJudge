#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;

class Character
{
public:
    Character()
    {
        cout << "Default constructor is called!" << endl;
    }
    Character(char in_ch)
    {
        ch=in_ch;
        printf("Character %c is created!\n",ch);
    }

    void setCharacter(char in_ch)
    {
        ch=in_ch;
    }
    char getCharacter()
    {
        return ch;
    }
     int getAsciiCode()
     {
         return ch;
     }
     ~Character()
     {
         printf("Character %c is erased!\n",ch);
     }
private:
    char ch;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

