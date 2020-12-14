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
		string name;
		int age;
	public:
		Person(string n, int a){
			name = n, age = a;
			cout << "A person " << name << " whose age is " << age << " is created.\n";
		}
		~Person(){
			cout << "A person " << name << " whose age is " << age << " is erased.\n";
		}
		void show(){
			cout << "Name is " << name << " and age is " << age << ".\n";
		}
};
class Student : public Person{
	private:
		int grade;
	public:
		Student(string n, int a, int g) : Person(n, a), grade(g){
			cout << "A student whose grade is " << grade << " is created.\n";
		}
		~Student(){
			cout << "A student whose grade is " << grade << " is erased.\n";
		}
		void show(){
			cout << "Grade is " << grade << ".\n";
		}
};
int main()
{
    string n;
    int a, g;
    cin>>n>>a>>g;
    Student student(n, a, g);
    student.Person::show();
    student.show();
    return 0;
}
/**************************************************************
	Problem: 1824
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

