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
#define mod 10000
#define INF 1400000000
using namespace std;

/*class box{
	protected:
		int volume;
		int height, lenth, breadth;
	public:
		void set_lenth(int len){
			lenth = len;
		} 
		void set_breadth(int bre){
			breadth = bre;
		}
		void set_height(int he){
			height = he;
		}
};
class small_box : public box{
	public:
		int get_volume();
};

inline int small_box::get_volume(){
	volume = height * lenth * breadth;
	return volume;
}

int main(){
	small_box my_box;
	my_box.box::set_lenth(1), my_box.box::set_breadth(2), my_box.box::set_height(3);
	printf("%d", my_box.get_volume());
	return 0;
}*/ 

class Person{
	private:
		bool sex;
		int age;
		
	public:
		static int num;
		Person(int a = 0, bool s = false){
			age = a, sex = s;
			++ num;
			cout << "The No." << num << " person, age=" << age << ",sex=";
			if(sex){
				cout << "M is created!\n";
			}
			else{
				cout << "F is created!\n";
			}
		}
		Person(const Person &p1){
			sex = p1.sex, age = p1.age;
			++ num;
			cout << "The No." << num << " person, age=" << age << ",sex=";
			if(sex){
				cout << "M is copyed!\n";
			}
			else{
				cout << "F is copyed!\n";
			}
		}
};

int Person::num = 0;
int main()
{
	int a;
	bool s;
	cin>>a>>s;
	Person p1(a,s),p2(p1),p3,p4(p3);
	return 0;
}
/**************************************************************
	Problem: 1322
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

