#include <iostream>
#include <vector>
using namespace std;

class MaxValue {
private:
    vector<int> elem_;

public:
    void append(int n)
    {
        elem_.push_back(n);
    }
    int getMax()
    {
        int max = elem_.front();
        for (vector<int>::iterator i=elem_.begin(); i != elem_.end(); i++)
            if (*i > max)
                max = *i;
        return max;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

