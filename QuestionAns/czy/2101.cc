#include <bits/stdc++.h>

using namespace std;

class Integer
{
    int data;
public:
    Integer(int x):data(x){}
    bool judge()
    {
        if(data==0) return false;
        int a[12];
        int m=0;
        int sum=0;
        while(data)
        {
            a[m]=data%10;
            ++m;
            data/=10;
        }
        for(int i=0;i<m;++i) sum+=a[i];
        if(sum%2==0) return false;
        else return true;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

