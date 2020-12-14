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

class Person{
	public:
		int age;
		char sex;
	public:
		Person(int a, char s){
			age = a, sex = s;
			cout << "Person age = " << age << ", sex = " << sex << " is created.\n";
		}
		~Person(){
			cout << "Person age = " << age << ", sex = " << sex << " is erased.\n";
		}
};
class Student : public Person{
	private:
		int class_number;
	public:
		Student(int age, char sex, int par) : Person(age, sex), class_number(par){
			cout << "Student of class " << class_number << " is created.\n";
			cout << "Student of class " << class_number << " is erased.\n";
		}
		~Student(){
			
		}
};
class Teacher : public Person{
	private:
		int money;
	public:
		Teacher(int age, char sex, int par) : Person(age, sex), money(par){
			cout << "Teacher with salary " << money << " is created.\n";
			cout << "Teacher with salary " << money << " is erased.\n";
		}
		~Teacher(){
			
		}
};
int main()
{
    Person *p;
    int age, par;
    char sex, t;
    while (cin>>age>>sex>>t>>par)
    {
        if (t == 's')
        {
            p = new Student(age, sex, par);
        }
        else
        {
            p = new Teacher(age, sex, par);
        }
        delete p;
    }

}

/**************************************************************
	Problem: 2092
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

