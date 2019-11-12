#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class  Thing
{
private:
    string name;
public:
    Thing(){name="";cout<<"A thing without name is created!"<<endl;}
    Thing(Thing &p)
    {
        name=p.name;
        if(p.name=="")
            cout<<"A thing without name is copied!"<<endl;
        else
        {
            cout<<"A thing named by "<<p.name<<" is copied!"<<endl;
        }
    }
    Thing (string as)
    {
        name=as;
        cout<<"A thing named by "<<name<<" is created!"<<endl;

    }
    ~Thing()
    {
         if(name=="")
            cout<<"A thing without name is erased!"<<endl;
        else
        {
            cout<<"A thing named by "<<name<<" is erased!"<<endl;
        }
    }
};
int main()
{
    string name;
    Thing Thing1, Thing2(Thing1);
    cin>>name;
    Thing Thing3(name);
    Thing Thing4(Thing3);
    return 0;
}
/**************************************************************
	Problem: 1818
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

