#include <iostream>

using namespace std;

class Cup{
public:
    Cup():v_(0){cout<<"A cup of "<<v_<<" ml is created."<<endl;}
    Cup(int v):v_(v){cout<<"A cup of "<<v_<<" ml is created."<<endl;}
    ~Cup(){cout<<"A cup of "<<v_<<" ml is erased."<<endl;}
    Cup(const Cup& c):v_(c.v_){cout<<"A cup of "<<v_<<" ml is copied."<<endl;}
    void setVolume(int v) {v_ = v;}
private:
    int v_;
};
int main()
{
    Cup c1;
    int i, j;
    cin>>i>>j;
    Cup c2(i), c3(c2);
    c3.setVolume(j);
    return 0;
}
/**************************************************************
	Problem: 2212
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

