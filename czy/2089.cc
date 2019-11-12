#include "bits/stdc++.h"
using namespace std;

class Expression
{
protected:
    int x,y;
    char c;
public:
    Expression(int xx,int yy,int cc):x(xx),y(yy),c(cc){}
    void show()
    {
        if(c=='+') cout<<x<<" + "<<y<<" = "<<x+y<<endl;
        else if(c=='-') cout<<x<<" - "<<y<<" = "<<x-y<<endl;
        else if(c=='*') cout<<x<<" * "<<y<<" = "<<x*y<<endl;
        else if(c=='/') cout<<x<<" / "<<y<<" = "<<x/y<<endl;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

