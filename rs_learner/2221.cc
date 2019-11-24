#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Difficult
{
    int a;
public:
    Difficult(int _a):a(_a){}
    ~Difficult(){}
    void show()
    {
        if(a>=0)
            cout<<a<<endl;
        else
            cout<<-a<<endl;
    }
};
int main()
{
    int a;
    cin>>a;
    Difficult difficult(a);
    difficult.show();
    return 0;
}
/**************************************************************
	Problem: 2221
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

