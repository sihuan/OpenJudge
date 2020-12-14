#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
using namespace std;
int rec=0;
class  newInt
{
private:
    int x;
public:
    newInt():x(0){}
    newInt(int xx):x(xx){}
    friend newInt operator +(newInt &x1,newInt &x2)
    {
        newInt t;
        t.x=0;
        int num=1;
        int q,w;
        q=x1.x;w=x2.x;
        if(q==0&&w==0) {t.x=0;return t;}
        while(q!=0 || w!=0)
        {
            t.x=t.x+(q%10+w%10)%10*num;
            num=num*10;
            q=q/10;
            w=w/10;
        }
        return t;

    }
    friend ostream &operator <<(ostream &os,newInt &t)
    {
        os<<t.x;
        return os;
    }
    friend istream &operator >>(istream &is,newInt &t)
    {
        is>>t.x;
        return is;
    }

};

int main()
{
    int cases;
    newInt a, b, c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>a>>b;
        c = a + b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1829
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

