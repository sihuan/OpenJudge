//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");
class Logical{
public:
    Logical(int a,int b,char op) : a_(a),b_(b),op_(op){}
    void show() const {
        int rt;
        if(op_ == '+'){
            if(a_+b_ == 1) rt = 1;
            else rt = 0;
        } else if(op_ == '-'){
            if(a_+b_ == 1) rt = 0;
            else rt = 1;
        } else if(op_ == '*'){
            rt = a_*b_;
        } else if(op_ == '/'){
            if(a_+b_ == 0) rt = 0;
            else rt = 1;
        }
        cout<<a_<<" "<<op_<<" "<<b_<<" = "<<rt<<endl;
    }
private:
    int a_,b_;
    char op_;
};
int main()
{
    int a, b;
    char ch;
    while (cin>>a>>ch>>b)
    {
        Logical log(a, b, ch);
        log.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2099
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

