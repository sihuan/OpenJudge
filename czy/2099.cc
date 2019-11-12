#include <bits/stdc++.h>

using namespace std;

class Logical
{
    int a,b;
    char op;
public:
    Logical(int aa,int bb ,char opp):a(aa),b(bb),op(opp)
    {

    }

    void show()
    {
        int c=0;
        if(op=='+')
        {
            if(a!=b) c=1;
            else c=0;
        }
        if(op=='-')
        {
            if(a!=b) c=0;
            else c=1;
        }
        if(op=='*') c=a*b;
        if(op=='/')
        {
            c=a+b;
            if(c==2) c=1;
        }
        cout<<a<<" "<<op<<" "<<b<<" = "<<c<<endl;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

