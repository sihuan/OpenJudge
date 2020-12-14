#include <iostream>
#include <string>
using namespace std;

class Thing {
private:
    string name_;

public:
    Thing()
    {
        cout << "A thing without name is created!" << endl;
    }
    Thing(const Thing& t)
        : name_(t.name_)
    {
        if (name_ != "")
            cout << "A thing named by " << name_ << " is copied!" << endl;
        else
            cout << "A thing without name is copied!" << endl;
    }
    ~Thing()
    {
        if (name_ != "")
            cout << "A thing named by " << name_ << " is erased!" << endl;
        else
            cout << "A thing without name is erased!" << endl;
    }
    Thing(string n)
        : name_(n)
    {
        cout << "A thing named by " << name_ << " is created!" << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

