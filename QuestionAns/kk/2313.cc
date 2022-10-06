#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Pear
{
public:
    Pear(double w=0)
    {
        we=w;
        cout<<we<<"kg pear is created."<<endl;
    }
    Pear(Pear& pe)
    {
        we=pe.we;
        cout<<we<<"kg pear is copied."<<endl;
    }
    double weight()const
    {
        return we;
    }
    void weight(double w)
    {
        we=w;
    }
    ~Pear()
    {
        cout<<we<<"kg pear is erased."<<endl;
    }
private:
    double we;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

