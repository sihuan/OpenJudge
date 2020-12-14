#include <bits/stdc++.h>
using namespace std;
int cnts=0;  //全局
int cntr=0;
int cntc=0;
int cntu=0;
class Shape
{
public:
    Shape()
    {
        cnts++;
    }
    static int getCntOfShapes()
    {
        return cnts;
    }
    virtual double getArea()=0;
    virtual void print()=0;
};

class Rectangle :public Shape
{
public:
    double L,W;
    Rectangle(double a=0,double b=0):L(a),W(b)
    {
        cntr++;
    }
    static int getCntOfRects()
    {
        return cntr;
    }
    double getArea()
    {
        return L*W;
    }
    void print()
    {
        cout<<"rect("<<L<<","<<W<<")";
    }
};

class Circle:public Shape
{
public:
    double r;
    Circle(double a=0):r(a)
    {
        cntc++;
    }
    static int getCntOfCircles()
    {
        return cntc;
    }
    double getArea()
    {
        return 3.14*r*r;
    }
    void print()
    {
        cout<<"circle("<<r<<")";
    }
};

class User
{
public:
    string name;
    Shape *shape;//一个图形      //*shape才能new
    vector<Shape *> dict1;//图形的列表
    User(string s):name(s)
    {
        cntu++;
    }
    static int getCntOfUsers()
    {
        return cntu;
    }
    void addAShape(int t,double a,double b)
    {
        if(t==1)
        {
            shape=new Rectangle(a,b);
            dict1.push_back(shape);
        }
    }
    void addAShape(int t,double a)
    {
        if(t==2)
        {
            shape=new Circle (a);
            dict1.push_back(shape);
        }
    }
    double getArea()
    {
        double sum=0;
        for(int i=0; i<dict1.size(); i++)
            sum+=dict1[i]->getArea();
        return sum;
    }
};

class UserList
{
    friend class Shape;
    friend class Rectangle;
    friend class Circle ;
    friend class User;
public:
    vector <User *> dict2;
    User *user;
    Shape *shape;
//******************************//
    void showTotalArea(string s)
    {
        int ok=0;
        int n=dict2.size();
        for(int i=0; i<n; i++)
        {
            if(dict2[i]->name==s)
            {
                cout<<dict2[i]->getArea()<<endl;
                ok=1;
            }
        }
        if(ok==0) cout<<"The user "<<s<<" doesn't exist."<<endl;
    }
    friend istream& operator >>(istream & is,UserList & p)
    {
        int n;
        is>>n;
        for(int i=0; i<n; i++)
        {
            int M,t;
            string s;
            is>>s>>M;
            p.user = new User(s);//创建一个用户
            for(int j=0; j<M; j++)
            {
                is>>t;
                if(t==1)
                {
                    double a,b;
                    is>>a>>b;
                    p.shape=new Rectangle(a,b);
                }
                else
                {
                    double a;
                    is>>a;
                    p.shape=new Circle(a);
                }
                p.user->dict1.push_back(p.shape);
            }
            p.dict2.push_back(p.user);
        }
        return is;
    }
    friend ostream &operator<<(ostream & os,const UserList & p)
    {
        for(int i=0; i<p.dict2.size(); i++)
        {
            User* U=p.dict2[i];//取出一个用户  U
            cout<<U->name<<" : ";//输出用户的名字
            vector <Shape *> S=U->dict1;//取出用户的图形列表 //S指向用户的图形表
            for(int j=0; j<S.size(); j++)
            {
                if(j!=0)  cout<<",";
                Shape *SS=S[j];//取出一个图形
                SS->print();
            }
            cout<<endl;
        }
        return os;
    }
};
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1280 kb
****************************************************************/

