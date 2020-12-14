#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Test
{
    int m;
public:
    Test(int _m=0):m(_m)
    {
        cout<<"Test "<<m<<" is created."<<endl;
    }
    ~Test()
    {
        cout<<"Test "<<m<<" is erased."<<endl;
    }
    int getMem(){return m;}
    void setMem(int _m){m=_m;}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

