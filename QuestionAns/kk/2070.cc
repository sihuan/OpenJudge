#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class Orgnization
{
public:
    virtual void show()=0;
protected:
    string le_name;
    string or_name;
};

class College:public Orgnization
{
public:
    College(string org,string leader)
    {
        or_name=org;
        le_name=leader;
    }
    void show()
    {
        cout<<"Dean of "<<or_name<<" is "<<le_name<<endl;
    }
};

class Department:public Orgnization
{
public:
    Department(string org,string leader)
    {
        or_name=org;
        le_name=leader;
    }
    void show()
    {
        cout<<"Director of "<<or_name<<" is "<<le_name<<endl;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

