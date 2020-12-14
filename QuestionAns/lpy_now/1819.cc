#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class CPU{
	public:
		int my_CPU;
	public:
		CPU(int number){
			my_CPU = number;
		}
};
class Memory{
	public:
		int my_Memory;
	public:
		Memory(int number){
			my_Memory = number;
		}
};
class Computer{
	private:
		Memory my_computer_Memory;
		CPU my_computer_CPU;
		string name;
	public:
		Computer(CPU c, Memory m, string s) : my_computer_CPU(c), my_computer_Memory(m), name(s){
			
		}
		void show(){
			cout << "This is " << name << "\' computer with CPU = " << my_computer_CPU.my_CPU << "GHz, memory = " << my_computer_Memory.my_Memory << "MB.\n";
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

