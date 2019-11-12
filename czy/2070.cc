#include <bits/stdc++.h>

using namespace std;

class  Orgnization
{
protected:
    string name,nameleader;
public:
    Orgnization(string q,string w):name(q),nameleader(w){}
    virtual void show()=0;
};

class College : public Orgnization
{
public:
    College(string q,string w) : Orgnization(q,w){}
    void show()
    {
        cout << "Dean of " << name << " is " << nameleader << endl;
    }
};

class Department : public Orgnization
{
public:
    Department(string q,string w) : Orgnization(q,w){}
    void show()
    {
       cout << "Director of " << name << " is " << nameleader << endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

