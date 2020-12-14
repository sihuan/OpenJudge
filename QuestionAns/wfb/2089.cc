#include <iostream>
#include <cstdio>

using namespace std;

class Expression{
public:
    Expression(int a,int b,char op) : a_(a),b_(b),op_(op){}
    void show() const {cout<<a_<<" "<<op_<<" "<<b_<<" = ";
        int result = 0;
        switch(op_) {
            case '+' : result = a_+b_; break;
            case '-' : result = a_-b_; break;
            case '*' : result = a_*b_; break;
            case '/' : result = a_/b_; break;
        }
        cout<<result<<endl;
    }
private:
    int a_,b_;
    char op_;
};
int main()
{
    int N, i, a, b;
    char op;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        cin>>a>>op>>b;
        Expression exp(a, b, op);
        exp.show();
    }
    return 0;
}

/**************************************************************
	Problem: 2089
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

