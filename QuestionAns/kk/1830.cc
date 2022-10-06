#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class MaxValue
{
public:
    MaxValue(){}
    void append(int a)
    {
        if(times==0)
        {
            maxvalue=a;
            times++;
        }
        else if(a>maxvalue)
        maxvalue=a;
    }
    int getMax()
    {
        return maxvalue;
    }
private:
    static int times;
    int maxvalue;
};
int MaxValue::times=0;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

