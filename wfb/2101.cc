//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class Integer{
public:
    Integer(int d) : data_(d) {}
    bool judge() {
        int sum = 0;
        int tmp = data_;
        while(tmp) {
            sum += tmp%10;
            tmp /= 10;
        }
        if(sum % 2) return true;
        else return false;
    }
private:
    int data_;
};
int main()
{
    int i;
    while(cin>>i)
    {
        Integer INT(i);
        if (INT.judge())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2101
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

