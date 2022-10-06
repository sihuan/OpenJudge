#include <iostream>
#include <iomanip>
using namespace std;

class Equation
{
public:
    int s[5];
    Equation()
    {
        for(int i=0;i<5;i++)
            s[i]=0;
    }
    void print()
    {
        int flag=0,fl=0;
        for(int i=0;i<5;i++)
            if(s[i])
                flag++;
        if(!flag)
        {
            cout << '0' << endl;
            return ;
        }
        for(int i=0;i<5;i++)
        {
            if(!s[i])
                continue;
            if(s[i])
            {
                if(fl)
                    cout << '+';
                else
                    fl++;
            }

            if(i<4&&(s[i]!=1))
                cout << s[i];
            if(i==4&&(s[i]!=0))
                cout << s[i];
            if(i<4)
                cout << "x^" << 4-i;
        }
        cout << endl;
    }
    double getValue(double x)
    {
        double ans;
        ans=s[0]*x*x*x*x+s[1]*x*x*x+s[2]*x*x+s[3]*x+s[4];
        return ans;
    }
    void setArgs(int a[])
    {
        for(int i=0;i<5;i++)
            s[i]=a[i];
    }
};
int main()
{
    int i, a[5];
    double x;
    Equation eq1;
    cout<<"1:";
    eq1.print();
    for (i = 0; i < 5; i++)
        cin>>a[i];
    eq1.setArgs(a);
    cout<<"2:";
    eq1.print();
    cin>>x;
    cout<<eq1.getValue(x)<<endl;
    return 0;
}
/**************************************************************
	Problem: 2195
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

