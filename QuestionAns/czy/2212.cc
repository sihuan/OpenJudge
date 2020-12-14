#include <bits/stdc++.h>

using namespace std;

class Cup
{
public:
    int volum;
    Cup(int aa=0):volum(aa)
    {
        cout<<"A cup of "<<volum<<" ml is created."<<endl;
    }
    Cup(Cup &p):volum(p.volum)
    {
        cout<<"A cup of "<<volum<<" ml is copied."<<endl;
    }
    ~Cup()
    {
        cout<<"A cup of "<<volum<<" ml is erased."<<endl;
    }
    void setVolume(int aa)
    {
        volum=aa;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

