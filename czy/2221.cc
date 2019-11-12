#include <bits/stdc++.h>

using namespace std;

class Difficult
{
public:
    int x;
    Difficult(int aa):x(aa){}
    int show()
    {
        if(x<0) x=x*-1;
        cout<<x;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

