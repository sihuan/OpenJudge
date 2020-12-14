#include<bits/stdc++.h>
using namespace std;
class CPU
{
    friend class Computer;
private:
    int v;
public:
    CPU(int _v):v(_v){}
    ~CPU(){}
};
class Memory
{
    friend class Computer;
private:
    int r;
public:
    Memory(int _r):r(_r){}
    ~Memory(){}
};
 class Computer
 {
     friend class CPU;
     friend class Memory;
private:
    CPU c;
    Memory m;
    string name;
public:
    Computer(int _v,int _r,string _name):c(_v),m(_r),name(_name){}
    ~Computer(){}
    void show()
    {
        cout<<"This is "<<name<<"' computer with CPU = "<<c.v<<"GHz, memory = "<<m.r<<"MB."<<endl;
    }
    Computer(CPU _cpu,Memory _Memory,string _name):c(_cpu),m(_Memory),name(_name){}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

