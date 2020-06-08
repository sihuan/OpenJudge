#include<iostream>
#include<string>
using namespace std;
class Test
{
public:
    Test()
    {
        flag=0;
        cout<<"Create an object with name NULL"<<endl;
    }
    Test(string a)
    {
        tmp=a;
        flag=1;
        cout<<"Create an object with name "<<tmp<<endl;
    }
    ~Test()
    {
        if(flag==0)
            cout<<"Erase an object with name NULL"<<endl;
        if(flag==1)
            cout<<"Erase an object with name "<<tmp<<endl;

    }
private:
    string tmp;
    int flag;

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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

