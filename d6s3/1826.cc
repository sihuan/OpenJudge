#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

class CharGraph {
private:
    int fl_;
    char ch_;
    void printchar(int n)
    {
        for (int i = 0; i < n; i++)
            putchar(ch_);
        cout << endl;
    }

public:
    CharGraph(int n, char c)
        : fl_(n)
        , ch_(c)
    {
    }
    void print()
    {
        if (fl_ == 0)
            cout << endl;
        else if (fl_ > 0)
            for (int i = 1; i <= fl_; i++) {
                printchar(i);
            }
        else
            for (int i = fl_; i < 0; i++) {
                printchar(-i);
            }
    }
};
int main()
{
    int cases, n;
    char c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>n>>c;
        CharGraph cGraph(n, c);
        cGraph.print();
    }
    return 0;
}
/**************************************************************
	Problem: 1826
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

