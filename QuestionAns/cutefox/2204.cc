
#include <iostream>
#include<cstdio>
using namespace std;
class Integer
{
private:
    int value;
    int chengshu;
public:
    void setValue(int a)
    {
        value = a;
        int num=0,c = value;
        while(c)
        {
            c/=10;
            num++;
        }
        chengshu=1;
        for(int i=0;i<num;i++)
            chengshu*=10;
    }
    int getValue()
    {
        return value;
    }
    Integer operator*(int& a)
    {
        Integer sss;
        sss.value = value;
        sss.chengshu = chengshu;
        //sss.chengshu = chengshu;
        for(int i=1;i<a;i++)
        {
            sss.value*=sss.chengshu;
            sss.value+=value;
        }
        return sss;
    }
    Integer& operator=(Integer another)
    {
        value = another.value;
        return *this;
    }
};
int main()
{
    Integer M, N;
    int a, n, m;
    cin>>a;
    M.setValue(a);
    cin>>n;
    while (n--)
    {
        cin>>m;
        N = M * m;
        cout<<N.getValue()<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2204
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

