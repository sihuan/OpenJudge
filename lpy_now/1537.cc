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
	protected:
		string name, address, tel, major, post;
		int age;
		char sex;
		float wages;
		
};
class Student : virtual public Person{
	public:
		void setTel(string s){
			tel = s;
		}
		Student(string a, int b, char c, string d, string e, string f, string g, float h){
			name = a, age = b, sex = c, address = d, tel = e, major = f, post = g, wages = h;
		}
};
class Cadre : virtual public Person{
	public:
		void setTel(string s){
			tel = s;
		}
};
class Student_Cadre : public Student, public Cadre{
	public:
		Student_Cadre(string a, int b, char c, string d, string e, string f, string g, float h) : Student(a, b, c, d, e, f, g, h){
			
		}
		void display(){
			cout << "name:" << name << "\nage" << age << "\nsex:" << sex << "\naddress:" << address << "\ntel:" << tel << "\nmajor:" << major << "\npost:" << post << "\nwages:" << wages << "\n";
		}
		void setAddr(string s){
			address = s;
		}
};
int main( )
{
    string name, major, post, addr, tel;
    int age;
    char sex;
    float wage;
    cin>>name>>age>>sex>>addr>>tel>>major>>post>>wage;

    Student_Cadre st_ca(name, age, sex,  addr, tel, major, post,wage);
    st_ca.display( );

    cout<<endl;
    string newAddr, newTel1, newTel2;
    cin>>newAddr>>newTel1>>newTel2;

    st_ca.setAddr(newAddr);
    st_ca.Student::setTel(newTel1);
    st_ca.Cadre::setTel(newTel2);
    st_ca.display( );
    return 0;
}
/**************************************************************
	Problem: 1537
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

