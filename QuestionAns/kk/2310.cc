#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Mandarin
{
public:
    Mandarin(double we=0)
    {
        w=we;
    }
    void weight(double we)
    {
        w+=we;
    }
    double weight()
    {
        return w;
    }
protected:
    double w;
};

class MandarinBox
{
public:
    MandarinBox(double pr=0)
    {
        p=pr;
        sw=0;
    }
    Mandarin& operator [](int index)
    {
        return man[index];
    }
    double value()
    {
        for(int i=0;i<6;i++)
        {
            sw+=man[i].weight();
        }
        return p*sw;
    }
private:
    Mandarin man[6];
    double p;
    double sw;
};

int main()
{
    double price, w;

    cin >> price;
    MandarinBox mandarin(price);
    for(int i = 0; i < 6; i++)
    {
        cin >> w;
        mandarin[i].weight(w);
    }
    cout << mandarin.value() << endl;
}

/**************************************************************
	Problem: 2310
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

