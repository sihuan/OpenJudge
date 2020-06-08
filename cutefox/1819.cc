#include<iostream>
#include<string>
using namespace std;
class CPU
{
public:
    int zhu;
    CPU() {}
    CPU(int a)
    {
        zhu=a;
    }
};
class Memory
{
public:
    int ram;
    Memory(int a)
    {
        ram=a;
    }
    Memory() {}
};
class Computer
{
public:
    CPU a;
    Memory b;
    string s;
    Computer(int a,int b,string c):a(a),b(b){s=c;}
    Computer(CPU &x,Memory & m,string c)
    {
        a.zhu=x.zhu;
        b.ram=m.ram;
        s=c;
    }
    void show()
    {
        cout<<"This is "<<s<<"' computer with CPU = "<<a.zhu<<"GHz, memory = "<<b.ram<<"MB."<<endl;
    }
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

