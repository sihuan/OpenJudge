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
	public:
		Person(string n){
			name = n;
			cout << "Person " << name << " is created.\n";
		}
		~Person(){
			cout << "Person " << name << " is erased.\n";
		}
};
class Student : public Person{
	public:
		int id;
		string name;
	public:
		Student(string s, int i) : Person(s), id(i){
			name = s;
			cout << "Student " << s << " with id " << id << " is created.\n";
		}
		~Student(){
			cout << "Student " << name << " with id " << id << " is erased.\n";
		}
};
class Teacher : public Person{
	public:
		string job;
	public:
		Teacher(string name, string job_job) : Person(name){
			job = job_job;
			cout << "Teacher " << name << " with position " << job << " is created.\n";
		}
		~Teacher(){
			cout << "Teacher " << name << " with position " << job << " is erased.\n";
		}
};
class Course{
	public:
		Teacher T;
		Student S;
		string name;
	public:
		Course(string s1, string s2, string s3, string s4, int i) : T(s2, s3), S(s2, i){
			cout << "Course " << s4 << " is created.\n";
			name = s4;
		}
		~Course(){
			cout << "Course " << name << " is erased.\n";
		}
};
int main()
{
    string s1, s2, s3, s4;
    int i;
    cin>>s1>>s2>>s3>>s4>>i;
    Person person1(s1), person2(s2);
    Teacher teacher(s1, s3);
    Student student(s2, i);
    Course course(s1, s2, s3, s4, i);
    return 0;
}
/**************************************************************
	Problem: 2057
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

