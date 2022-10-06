#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

class Computer
{
public:
    Computer(char str[])
    {
        strcpy(name,str);
        cnt++;
    }
    Computer(const Computer &ano)
    {
        strcpy(name,ano.name);
        cnt++;
    }
    Computer setName(char str[])
    {
        strcpy(name,str);
        return *this;
    }
    void print()
    {
        cout << name << endl;
    }
    static int getCnt()
    {
        return cnt;
    }
    ~Computer()
    {
        cnt--;
    }
private:
    char name[101];
    static int cnt;
};
int Computer::cnt=0;
int main()
{
    char str[101];
    cout<<"1:"<<Computer::getCnt()<<" computers."<<endl;
    Computer com1("Tom"), com2(com1);
    cout<<"2:"<<com2.getCnt()<<" computer."<<endl;
    cin>>str;
    com2.setName(str).print();
    com2.print();
    cout<<"3:"<<com2.getCnt()<<" computer."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2196
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

