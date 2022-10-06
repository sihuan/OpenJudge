#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class SpecialPrime
{
public:
    static bool judge(int value);
};
bool SpecialPrime::judge(int value)
{
    int i,j,k;
    if(value<=100)
    {
        if(value==2||value==3||value==5||value==7||value==11)
            return true;
        return false;
    }
    if(value>100)
    {
        if(value%2==0)
            return false;
        for(i=3;i<=sqrt(value);i+=2)
            if(value%i==0)
                return false;
        for(i=10;i<=value;i*=10);
        for(i/=10;i>0;i/=10)
        {
            if(value/i!=value%10)
                return false;
            value=value%i/10;
            i/=10;
        }
    }
    return true;
}

int main()
{
    int m, n, i;
    cin>>m>>n;
    for (i = m; i < n; i++)
    {
        if (SpecialPrime::judge(i))
            cout<<i<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2210
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:1656 ms
	Memory:1280 kb
****************************************************************/

