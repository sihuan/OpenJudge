#include<bits/stdc++.h>
using namespace std;
class Thing
{
private:
    string name;
public:
    Thing(string _name):name(_name)
    {
        cout<<"Construct a thing "<<name<<endl;
    }
    ~Thing()
    {
        cout<<"Destroy a thing "<<name<<endl;
    }
};
int main()
{
    Thing A("Car");
    string str;
    cin>>str;
    Thing B(str);
    return 0;
}
/**************************************************************
	Problem: 2071
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

