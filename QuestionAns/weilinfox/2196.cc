#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

class Computer {
public:
    char ch[101];
    static int num;
    Computer& setName (const char* c) {
        strcpy(ch, c);
        return *this;
    }
    Computer (const char *c) {
        strcpy(ch, c);
        num++;
    }
    Computer () {num++;}
    Computer (const Computer& c) {
        strcpy(ch, c.ch);
        num++;
    }
    void print() {
        cout << ch << endl;
    }
    static int getCnt () {
        return num;
    }

};

int Computer::num = 0;

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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

