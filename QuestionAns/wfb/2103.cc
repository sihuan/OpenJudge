//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class Shape{
public:
    Shape() {++cntOfShapes;}
    virtual double getArea() const = 0;
    virtual void show() const = 0;
    static int getCntOfShapes()  {return cntOfShapes;}
private:
    static int cntOfShapes;
};
class Rectangle : public Shape{
public:
    Rectangle(double l,double w) : l_(l),w_(w){++cntOfRects;}
    double getArea() const {return l_*w_;}
    void show() const {cout<<"rect("<<l_<<","<<w_<<")";}
    static int getCntOfRects() {return cntOfRects;}
protected:
    double l_,w_;
    static int cntOfRects;
};
class Circle : public Shape{
public:
    Circle(double r) : r_(r) {++cntOfCircles;}
    double getArea() const {return 3.14*r_*r_;}
    void show() const {cout<<"circle("<<r_<<")";}
    static int getCntOfCircles() {return cntOfCircles;}
protected:
    double r_;
    static int cntOfCircles;
};
class User{
public:
    User(){++cntOfUsers;}
    User(string name) : name_(name) {++cntOfUsers;}
    static int getCntOfUsers() {return cntOfUsers;}
    void addAShape(int t,double l,double w) {base_.push_back(new Rectangle(l,w));}
    void addAShape(int t,double r) {base_.push_back(new Circle(r));}
    void show() {
        vector<Shape*>::iterator ite;
        for(ite=base_.begin(); ite!=base_.end(); ++ite){
            if(ite!= base_.begin()) cout<<",";
            (*ite)->show();
        }
    }
    double getArea() {
        vector<Shape*>::iterator ite;
        double sum = 0;
        for(ite=base_.begin(); ite!=base_.end(); ++ite){
            sum += (*ite)->getArea();
        }
        return sum;
    }
    string getName() const {return name_;}
protected:
    string name_;
    vector<Shape*> base_;
    static int cntOfUsers;
};
class UserList{
    friend istream& operator >>(istream& is,UserList& u){
        int n,m,t;
        string name;
        double a,b;
        is>>n;
        for(int i=0; i<n; ++i){
            is>>name>>m;
            User user(name);
            for(int j=0; j<m; ++j){
                is>>t;
                if(t == 1) {
                    is>>a>>b;
                    user.addAShape(t,a,b);
                } else {
                    is>>a;
                    user.addAShape(t,a);
                }
            }
            u.base_.push_back(user);
        }
        return is;
    }
    friend ostream& operator <<(ostream& os,UserList& u){
        vector<User>::iterator ite;
        for(ite=u.base_.begin(); ite!=u.base_.end(); ++ite){
            os<<ite->getName()<<" : ";
            ite->show();
            os<<endl;
        }
        return os;
    }
public:
    UserList() {}
    void showTotalArea(string name) {
        vector<User>::iterator ite;
        bool isHave = false;
        for(ite=base_.begin(); ite!=base_.end(); ++ite){
            if(ite->getName() == name) {
                isHave = true;
                cout<<ite->getArea()<<endl;
            }
        }
        if(!isHave) cout<<"The user "<<name<<" doesn't exist."<<endl;
    }
private:
    vector<User> base_;
};

int Shape::cntOfShapes = 0;
int Rectangle::cntOfRects = 0;
int Circle::cntOfCircles = 0;
int User::cntOfUsers = 0;
int main()
{
    cout<<"In beginning, "<<User::getCntOfUsers()<<" users,";
    cout<<Shape::getCntOfShapes()<<" shapes."<<endl;
    User tmp("C++");
    tmp.addAShape(1, 1, 2);
    tmp.addAShape(2, 3);
    cout<<tmp.getArea()<<endl;

    UserList lst;
    string s1;
    cin>>lst;
    cout<<"Now, "<<User::getCntOfUsers()<<" users,";
    cout<<Shape::getCntOfShapes()<<" shapes, including ";
    cout<<Circle::getCntOfCircles()<<" circles, and ";
    cout<<Rectangle::getCntOfRects()<<" rectangles."<<endl;
    cout<<lst;
    while(cin>>s1)
    {
        lst.showTotalArea(s1);
    }
    return 0;
}

/**************************************************************
	Problem: 2103
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1284 kb
****************************************************************/

