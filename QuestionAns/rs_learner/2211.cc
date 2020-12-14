#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Building
{
    int c;
public:
    Building(int _c=0):c(_c){}
    ~Building(){}
    void setCnt(int _c){c=_c;}
    int getCnt(){return c;}
};
int main()
{
    Building b;
    int i;
    cin>>i;
    b.setCnt(i);
    cout<<"The building has "<<b.getCnt()<<" floors."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2211
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

