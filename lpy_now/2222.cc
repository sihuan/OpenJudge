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

class Date{
	private:
		int year, mounth, day;
	public:
		Date(int y, int m, int d){
			year = y, mounth = m, day = d;
			cout << "Date " << year << "-" << mounth << "-" << day << " is created.\n";
		}
		~Date(){
			cout << "Date " << year << "-" << mounth << "-" << day << " is erased.\n";
		}
		void get_time(){
			cout << year << "-" << mounth << "-" << day;
		}
};
class Person{
	private:
		Date my_date;
		string name;
	public:
		Person(int a, int b, int c, string s) : my_date(a, b, c), name(s){
			cout << "Person " << name << " was born at ";
			my_date.get_time();
			cout << " is created.\n";
		}
		~Person(){
			cout << "Person " << name << " was born at ";
			my_date.get_time();
			cout << " is erased.\n";
		}
};
int main()
{
    string name;
    int year, month, day;
    cin>>year>>month>>day;
    Date date(year, month, day);
    cin>>name>>year>>month>>day;
    Person person(year, month, day, name);
    return 0;
}
/**************************************************************
	Problem: 2222
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

