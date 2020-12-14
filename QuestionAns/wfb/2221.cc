#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

class Difficult{
public:
    Difficult(int d) : d_(d) {}
    void show() const {cout<<abs(d_)<<endl;}
private:
    int d_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

