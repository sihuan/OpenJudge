#include <iostream>

using namespace std;

class Thing {
private:
    string name_;
public:
    Thing() {cout<<"A thing without name is created!"<<endl;}
    Thing(string name) {name_ = name;cout<<"A thing named by "<<name_<<" is created!"<<endl;}
    Thing(const Thing& t) {
        if(t.getValue() == "")
            cout<<"A thing without name is copied!"<<endl;
        else {
            name_ = t.name_;
            cout<<"A thing named by "<<name_<<" is copied!"<<endl;
        }
    }
    ~Thing() {
        if(name_ == "")
            cout<<"A thing without name is erased!"<<endl;
        else
            cout<<"A thing named by "<<name_<<" is erased!"<<endl;
    }
    string getValue() const {return name_;}

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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

