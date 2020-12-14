#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
class Memory
{
    friend class Computer;
private:
    int n;
public:
    Memory(int nn) {n=nn;}

};
class CPU
{
    friend class Computer;
private:
    int c;
public:
    CPU(int cc){c=cc;}
};
class Computer
{

private:
    int ccc;
    int mmm;
    string sss;
public:
    Computer(CPU &cc,Memory &mm,string &ss)
    {
        ccc=cc.c;mmm=mm.n;sss=ss;
    }
    Computer(int cc,int mm,string ss)
    {
        ccc=cc;mmm=mm;sss=ss;
    }
    void show()
    {
        cout<<"This is "<<sss<<"' computer with CPU = "<<ccc<<"GHz, memory = "<<mmm<<"MB."<<endl;
    }
    friend class Memory;
    friend class CPU;
};

int main()
{
    int c, m;
    string n;
    cin>>c>>m>>n;
    CPU cpu(c);
    Memory mem(m);
    Computer com1(cpu, mem, n);
    cin>>c>>m>>n;
    Computer com2(c, m, n);
    com1.show();
    com2.show();
    return 0;
}
/**************************************************************
	Problem: 1819
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

