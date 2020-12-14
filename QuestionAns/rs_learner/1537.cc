#include<bits/stdc++.h>
#include<string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    char sex;
    string address;
    string tel;
public:
    Person(string _name,int _age,char _sex,string _address,string _tel):name(_name),age(_age),sex(_sex),address(_address),tel(_tel){}
    ~Person(){}
    void setTel(string _tel){tel=_tel;}
    void setAddr(string _add){address=_add;}
    string getname(){return name;}
    int getage(){return age;}
    char getsex(){return sex;}
    string getaddress(){return address;}
    string gettel(){return tel;}
};
class Student:virtual public Person
{
private:
    string major;
public:
    Student(string _major,string _name,int _age,char _sex,string _address,string _tel):Person(_name,_age,_sex,_address,_tel){major=_major;}
    ~Student(){}
    string getmajor(){return major;}
};
class Cadre:virtual public Person
{
private:
    string post;
public:
    Cadre(string _post,string _name,int _age,char _sex,string _address,string _tel):Person(_name,_age,_sex,_address,_tel),post(_post){}
    ~Cadre(){}
    string getpost(){return post;}
};
class Student_Cadre:public Student,public Cadre
{
private:
    double wages;
public:
    Student_Cadre(string _name,int _age,char _sex,string _address,string _tel,string _major,string _post,double _wages):Person(_name,_age,_sex,_address,_tel),Student(_major,_name,_age,_sex,_address,_tel),Cadre(_post,_name,_age,_sex,_address,_tel){wages=_wages;}
    ~Student_Cadre(){}
    void display()
    {
        cout<<"name:"<<getname()<<endl<<"age"<<getage()<<endl<<"sex:"<<getsex()<<endl<<"address:"<<getaddress()<<endl<<"tel:"<<gettel()<<endl<<"major:"<<getmajor()<<endl<<"post:"<<getpost()<<endl<<"wages:"<<wages<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

