#include <iostream>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>
#include <vector>
#include <iomanip>
#include <stack>
#include <map>
#include <cstdlib>

using namespace std;
 
class newInt
{
public:
    newInt operator +(newInt& another)
    {
        newInt result;
        unsigned flag=10;
        result.num=num+another.num;
        while(result.num/flag>0)
        {
            if((num%flag)/(flag/10)+(another.num%flag)/(flag/10)>9)
                result.num-=flag;
            flag*=10;
        }
        return result;
    }
    friend istream& operator >>(istream&,newInt&);
    friend ostream& operator <<(ostream&,newInt&);
private:
    int num;
};
 
istream& operator >>(istream& is,newInt& nint)
{
    is>>nint.num;
    return is;
}
 
ostream& operator <<(ostream& os,newInt& nint)
{
    os<<nint.num;
    return os;
}
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

