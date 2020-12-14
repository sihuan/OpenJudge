#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Orgnization{
public:
    Orgnization(string n,string l) : name(n),leader(l) {}
    virtual ~Orgnization() {}
    virtual void show() const = 0;
protected:
    string name,leader;
};
class College : public Orgnization{
public:
    College(string n,string l) : Orgnization(n,l){}
    ~College() {}
    void show() const {cout<<"Dean of "<<name<<" is "<<leader<<endl;}
};
class Department : public Orgnization{
public:
    Department(string n,string l) : Orgnization(n,l){}
    ~Department() {}
    void show() const {cout<<"Director of "<<name<<" is "<<leader<<endl;}
};
int main()
{
    vector<Orgnization*> university;
    vector<Orgnization*>::iterator itr;
    int n, i, t;
    string str1, str2;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>t;
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        if (t == 0)
            university.push_back(new College(str1, str2));
        else
            university.push_back(new Department(str1, str2));
    }
    for (itr = university.begin(); itr != university.end(); itr++)
        (*itr)->show();
    return 0;
}

/**************************************************************
	Problem: 2070
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

