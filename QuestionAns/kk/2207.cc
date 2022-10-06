#include <iostream>

using namespace std;

class Test
{
public:
    Test(string in="NULL")
    {
        name=in;
        cout << "Create an object with name " << name << endl;
    }
    ~Test()
    {
        cout << "Erase an object with name " << name << endl;
    }
private:
    string name;
};
int main()
{
    string name;
    Test t1;
    cin>>name;
    Test t2(name);
    return 0;
}
/**************************************************************
	Problem: 2207
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

