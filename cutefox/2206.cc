#include <iostream>
#include <iomanip>

using namespace std;

class Teacher
{
public:
     Teacher()
     {cout<<"Teacher's constructor."<<endl;}
     virtual ~Teacher()
     {cout<<"Teacher's deconstructor."<<endl;}
     virtual double getSalary()=0;
};

class HighSchoolTeacher:public Teacher
{
public:
    double bas;
    int x;
    HighSchoolTeacher(double b,int m):bas(b),x(m)
    {cout<<"HighSchoolTeacher's constructor."<<endl;}
    ~HighSchoolTeacher()
    {
        cout<<"HighSchoolTeacher's deconstructor."<<endl;
    }
    double getSalary()
    {
        return bas+100*x;
    }
};

class UniversityTeacher:public Teacher
{
public:
    double bas;
    int x;
    UniversityTeacher(double b,int m):bas(b),x(m)
    {
        cout<<"UniversityTeacher's constructor."<<endl;
    }
    ~UniversityTeacher()
    {
       cout<<"UniversityTeacher's deconstructor."<<endl;
    }
    double getSalary()
    {
        double s=0;
        if(x<240)
        {
            s=bas-20*(240-x);
        }
        else if(x>240)
        {
            s=bas+40*(x-240);
        }
        return s;
    }
};
int main()
{
    int N, i, m;
    char ch;
    double basis;
    Teacher *t;
    cin>>N;
    for (i = 0; i < N; i++)
    {
        cin>>ch>>basis>>m;
        if (ch == 'h')
            t = new HighSchoolTeacher(basis, m);
        else if (ch == 'u')
            t  = new UniversityTeacher(basis, m);
        cout<<setprecision(2)<<setiosflags(ios::fixed)<<t->getSalary()<<endl;
        delete t;
    }
    return 0;
}
/**************************************************************
	Problem: 2206
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

