#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Cherry
{
public:
    Cherry(double weight=0,double amount=0)
    {
        w=weight*amount;
    }
    double weight()
    {
        return w;
    }
    void weight(double we)
    {
        w=we;
    }
    void sold_weight(double we)
    {
        w-=we;
    }
private:
    double w;
};

int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}

/**************************************************************
	Problem: 2307
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

