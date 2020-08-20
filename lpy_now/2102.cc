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

class Vehicle{
	public:
		int number;
	public:
		Vehicle(int n){
			number = n;
			cout << "Vehicle has " << number << " wheels is created.\n";
		}
		~Vehicle(){
			cout << "Vehicle has " << number << " wheels is erased.\n";
		}
};
class Bus : public Vehicle{
	private:
		int guest;
	public:
		Bus(int a, int b) : Vehicle(a), guest(b){
			cout << "Bus which can carry " << guest << " persons is created.\n";
			cout << "Bus which can carry " << guest << " persons is erased.\n";	
		}
		~Bus(){
			
		}
		
};
class Truck : public Vehicle{
	private:
		int weight;
	public:
		Truck(int g, int w) : Vehicle(g), weight(w){
			cout << "Truck which can carry " << weight << " tons goods is created.\n";
			cout << "Truck which can carry " << weight << " tons goods is created.\n";
		}
		~Truck(){
			
		}
};
int main()
{
    int w, g;
    char t;
    Vehicle *veh;
    while (cin>>w>>t>>g)
    {
        if (t == 'b')
        {
            veh = new Bus(w, g);
        }
        else
        {
            veh = new Truck(w, g);
        }
        delete veh;
    }
    return 0;
}

/**************************************************************
	Problem: 2102
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

