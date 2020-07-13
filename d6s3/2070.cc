#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Orgnization {
protected:
    string orgname_, ledname_;

public:
    Orgnization(string o, string l)
        : orgname_(o)
        , ledname_(l)
    {
    }
    virtual void show() = 0;
};

class College : public Orgnization {
public:
    College(string o, string l)
        : Orgnization(o, l)
    {
    }
    void show()
    {
        cout << "Dean of " << orgname_ << " is " << ledname_ << endl;
    }
};

class Department : public Orgnization {
public:
    Department(string o, string l)
        : Orgnization(o, l)
    {
    }
    void show()
    {
        cout << "Director of " << orgname_ << " is " << ledname_ << endl;
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

