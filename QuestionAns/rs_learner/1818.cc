#include<bits/stdc++.h>
using namespace std;
class Thing
{
private:
    string name;
public:
    Thing()
    {
        cout<<"A thing without name is created!"<<endl;
    }
    Thing(string _name):name(_name)
    {
        cout<<"A thing named by "<<name<<" is created!"<<endl;
    }
    Thing(const Thing &t)
    {
        if(t.name=="\0")
            cout<<"A thing without name is copied!"<<endl;
        else
            {
                name=t.name;
                cout<<"A thing named by "<<name<<" is copied!"<<endl;
            }

    }
    ~Thing()
    {
        if(name=="\0")
            cout<<"A thing without name is erased!"<<endl;
        else
            cout<<"A thing named by "<<name<<" is erased!"<<endl;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

