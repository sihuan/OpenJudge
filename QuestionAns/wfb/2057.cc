#include <iostream>
#include <string>

using namespace std;

class  Person{
public:
    Person(string name) : n_(name){cout<<"Person "<<n_<<" is created."<<endl;}
    ~Person() {cout<<"Person "<<n_<<" is erased."<<endl;}
    string getName() const {return n_;}
    void setName(string n) {n_=n;}
protected:
    string n_;
};
class Student:public Person{
public:
    Student(string n,int num) : Person(n),num_(num){
        cout<<"Student "<<n_<<" with id "<<num_<<" is created."<<endl;
    }
    ~Student() {cout<<"Student "<<n_<<" with id "<<num_<<" is erased."<<endl;}
    int getNum() const {return num_;}
    void setNum(int num) {num_ = num;}
private:
    int num_;
};
class Teacher : public Person{
public:
    Teacher(string n,string p) : Person(n),p_(p){
        cout<<"Teacher "<<n_<<" with position "<<p_<<" is created."<<endl;
    }
    ~Teacher() {cout<<"Teacher "<<n_<<" with position "<<p_<<" is erased."<<endl;}
    string getP() const {return p_;}
    string setP(string p) {p_=p;}
private:
    string p_;
};
class Course{
public:
    Course(string n1,string n2,string p,string name,int num) : s_(n2,num),t_(n2,p),name_(name){
        cout<<"Course "<<name_<<" is created."<<endl;
    }
    ~Course(){cout<<"Course "<<name_<<" is erased."<<endl;}
private:
    Teacher t_;
    Student s_;
    string name_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

