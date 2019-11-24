#include<iostream>
#include<stack>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        double a;
        stack<double> s1;
        cin>>a;
        double sum=0;
        double result=0;
        s1.push(a);
         for(int i=0;i<n;i++)
        {
            double x1;
            char c;
            cin>>c;
            if(c!='=')
            {
                cin>>x1;
                if(c=='+')
                {
                     result=x1;
                    s1.push(result);
                }
                else if(c=='-')
                {
                    result=(-x1);
                    s1.push(result);
                }
                else if(c=='*')
                {
                     result=s1.top()*x1;
                    s1.pop();
                    s1.push(result);
                }
            }
            result=0;
        }

        while(!s1.empty())
        {
            sum+=s1.top();
            s1.pop();
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1351
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

