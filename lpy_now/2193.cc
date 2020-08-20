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

class Student{
	private:
		int n;
	public:
		Student(int gread){
			n = gread;
			cout << "A student grade " << n << " is created.\n";
		}
		~Student(){
			cout << "A student grade " << n << " is erased.\n";
		}
};
class Teacher{
	private:
		double n;
	public:
		Teacher(double money){
			n = money;
			cout << "A teacher with salary " << n << " is created.\n";
		}
		~Teacher(){
			cout << "A teacher with salary " << n << " is erased.\n";
		}
};
class School : public Student, public Teacher{
	public:
		School(int a, double b) : Student(a), Teacher(b){
			cout << "A school is created.\n";
		}
		~School(){
			cout << "A school is erased.\n";
		}
};
int main()
{
    int g;
    double s;
    cin>>g>>s;
    School sch(g, s);
    cin>>g;
    Student stu(g);
    cin>>s;
    Teacher tea(s);
    School(g, s);
    return 0;
}
/**************************************************************
	Problem: 2193
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

