#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Cup
{
    int volume;
public:
    Cup(int v=0):volume(v)
    {
        cout<<"A cup of "<<volume<<" ml is created."<<endl;
    }
    ~Cup()
    {
        cout<<"A cup of "<<volume<<" ml is erased."<<endl;
    }
    Cup(const Cup &c)
    {
        volume=c.volume;
        cout<<"A cup of "<<volume<<" ml is copied."<<endl;
    }
    void setVolume(int v)
    {
        volume=v;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

