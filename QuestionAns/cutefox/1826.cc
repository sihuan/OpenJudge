#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class CharGraph
{

public:
    CharGraph(int a,char b)
    {
        num = a;
        ch = b;
    }
    void print()
    {
        if(num==0)
            cout<<""<<endl;
        if(num>0)
            for(int i=0; i<num; i++)
            {
                for(int j=0; j<=i; j++)
                {
                    cout<<ch;

                }
                cout<<""<<endl;
            }
        if(num<0)
            for(int i=-1*num; i>0; i--)
            {
                for(int j=i-1; j>=0; j--)
                {
                    cout<<ch;

                }
                cout<<""<<endl;
            }

    }

private:
    int num;
    char ch;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

