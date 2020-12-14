#include"bits/stdc++.h"
using namespace std;

vector<int> v;

class MaxValue
{
private:
    int x;
public:
    void append(int q){v.push_back(q);}
    int getMax()
    {
        sort(v.begin(),v.end());
        return *(v.end()-1);
    }
};

int main()
{
    int a;
    MaxValue test;
    cin>>a;
    while (a != 0)
    {
        test.append(a);
        cin>>a;
    }
    cout<<test.getMax()<<endl;
    return 0;
}

/**************************************************************
	Problem: 1830
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

