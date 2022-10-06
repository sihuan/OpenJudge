#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

class CPU
{
public:
    CPU(int m=0)
    {
        mapp=m;
    }
    CPU(const CPU &another)
    {
        mapp=another.mapp;
    }
    void setC(int m)
    {
        mapp=m;
    }
    int mapp;
};
class Memory
{
public:
    Memory(int m=0)
    {
        mem=m;
    }
    Memory(const Memory &another)
    {
        mem=another.mem;
    }
    void setM(int m)
    {
        mem=m;
    }
    int mem;
};
class Computer
{
public:
    Computer(int c,int m,string n):cpu(c),memory(m)
    {
        name=n;
    }
    Computer(const CPU c,const Memory m,string n):cpu(c),memory(m)
    {
        name=n;
    }
    void show()
    {
        cout<< "This is "<<name<<"' computer with CPU = "<< cpu.mapp<<"GHz, memory = "<<memory.mem<<"MB."<<endl;
    }
private:
    Memory memory;
    CPU cpu;
    string name;

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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

