#include <iostream>
#include <string>
using namespace std;

class CPU {
private:
    int freq_;

public:
    CPU(int f)
        : freq_(f)
    {
    }
    int freq()
    {
        return freq_;
    }
};

class Memory {
private:
    int mem_;

public:
    Memory(int m)
        : mem_(m)
    {
    }
    int mem()
    {
        return mem_;
    }
};

class Computer {
private:
    CPU cpu_;
    Memory mem_;
    string owner_;

public:
    Computer(CPU c, Memory m, string o)
        : cpu_(c)
        , mem_(m)
        , owner_(o)
    {
    }
    void show()
    {
        cout << "This is " << owner_ << "' computer with CPU = " << cpu_.freq() << "GHz, memory = " << mem_.mem() << "MB." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

