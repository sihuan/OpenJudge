#include <iostream>
#include <iomanip>
using namespace std;

class Test{
        int member;
public:
        Test (int a = 0):member(a) {
                cout << "Test " << a << " is created." << endl;
        };
        ~Test (){cout << "Test " << member << " is erased." << endl;}
        void setMem (int a) {member=a;}
        int getMem (){return member;}
};


int main()
{
    Test t1;
    int i;
    cin>>i;

    Test t2(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    cin>>i;
    t2.setMem(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2194
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

