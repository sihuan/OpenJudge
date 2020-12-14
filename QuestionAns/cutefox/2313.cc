#include <iostream>
#include <cstring>
using namespace std;
class Pear
{
public:
    double w;
    void weight(double a)
    {
        w=a;
    }
    double weight()
    {
        return w;
    }
    Pear(double a)
    {
        w=a;
        cout<<w<<"kg pear is created."<<endl;
    }
    Pear()
    {
        w=0;
        cout<<w<<"kg pear is created."<<endl;
    }
    Pear(Pear& p)
    {
        w=p.w;
        cout<<w<<"kg pear is copied."<<endl;
    }
    ~Pear()
    {
        cout<<w<<"kg pear is erased."<<endl;
    }
};

int main()
{
    double w;
    cin >> w;
    Pear pe(w), pea, pear(pe);
    cin >> w;
    pear.weight(w);
    cout << pear.weight() << endl;
}

/**************************************************************
	Problem: 2313
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

