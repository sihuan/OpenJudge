#include <iostream>

using namespace std;

class CPU {
private:
    int c_;
public:
    CPU() {}
    CPU(int c) {c_=c;}
    int getValue() const {return c_;}
    void setValue(int c) {c_=c;}
};
class Memory {
private:
    int m_;
public:
    Memory() {}
    Memory(int m) {m_ = m;}
    int getValue() const {return m_;}
    void setValue(int m) {m_ = m;}
};
class Computer {
private:
    CPU cpu;
    Memory mem;
    string name;
public:
    Computer() {}
    Computer(CPU c,Memory m,string n) : cpu(c),mem(m),name(n){}
    void show() const {cout<<"This is "<<name<<"' computer with CPU = "<<cpu.getValue()<<"GHz, memory = "<<mem.getValue()<<"MB."<<endl;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

