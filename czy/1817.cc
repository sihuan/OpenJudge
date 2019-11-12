#include <iostream>
#include "iomanip"

using namespace std;

class  Character
{
    private:
        char x;
    public:
       Character(char xx){x=xx;}
         Character toUpper()
        {
            if('a'<=x&&x<='z') x=x-'a'+'A';
            return *this;
        }
         Character toLower()
         {
             if('A'<=x&&x<='Z') x=x-'A'+'a';
             return *this;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

