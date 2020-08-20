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

class Animal{
	public:
		virtual void eat() = 0;
};
class Dog : public Animal{
	public:
		void eat(){
			printf("Dog eats bone.\n");
		}
};
class Cat : public Animal{
	public:
		void eat(){
			printf("Cat eats fish.\n");
		}
};
class Sheep : public Animal{
	public:
		void eat(){
			printf("Sheep eats grass.\n");
		}
};
class Chicken : public Animal{
	public:
		void eat(){
			printf("Chicken eats worm.\n");
		}
};
int main()
{
    int c;
    vector<Animal*> animals;
    vector<Animal*>::iterator itr;
    while(cin>>c)
    {
        switch(c)
        {
        case 0 :
            animals.push_back(new Dog());
            break;
        case 1:
            animals.push_back(new Cat());
            break;
        case 2:
            animals.push_back(new Sheep());
            break;
        case 3:
            animals.push_back(new Chicken());
        }
    }
    for (itr = animals.begin(); itr != animals.end(); itr++)
        (*itr)->eat();
    return 0;
}
/**************************************************************
	Problem: 2077
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

