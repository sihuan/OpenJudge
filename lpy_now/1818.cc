#include <iostream>
#include <string>
using namespace std;
class Thing
{
private:
    string s;
public:
    Thing(){cout << "A thing without name is created!" << endl;}
    Thing(string name)
    {
        s = name;
        cout << "A thing named by " << s << " is created!" << endl ;
    }
    Thing(const Thing &name)
    {
        s = name.s;
        if(s.length())
            cout << "A thing named by " << s << " is copied!" << endl ;
        else
            cout << "A thing without name is copied!" << endl;
    }
    ~Thing(){
    if(s.length())
            cout << "A thing named by " << s << " is erased!" << endl ;
        else
            cout << "A thing without name is erased!" << endl;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

