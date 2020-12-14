#include<iostream>
#include<cmath>
using namespace std;
class SpecialPrime
{
public:
    static bool judge(int num)
    {
        int a,b;
        int x=0;
        a=num;
        while(a>0)
        {
            x=a%10+x*10;  //这里算的是什么？是从个位数开始算，然后加起来。把后边的数作为前面的数来算
            a=a/10;   //这里算什么？算除了最后那位前面的那几位，目的是让上面的那个式子可以算起来

        }
        if(x==num)
        {
            if(num ==2|| num==3 )
                return true;
            //不在6的倍数两侧的一定不是质数
            if(num %6!= 1&&num %6!= 5)
                return false ;
            int tmp =sqrt(num);
            //在6的倍数两侧的也可能不是质数
            for(int i= 5; i <=tmp; i+=6 )
                if(num %i== 0||num %(i+ 2)==0 )
                    return false;
            //排除所有，剩余的是质数
            return true ;
        }
        return false;
    }
private:
        int mem;
    };

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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

