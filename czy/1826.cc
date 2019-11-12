#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class CharGraph
{
private:
    int f;
    char ch;
public:
    CharGraph(int a, char b):f(a),ch(b){}
    void print()
    {
        if(f==0) cout<<endl;
        else if(f>0)
        {
            for(int i=1; i<=f; i++)
            {
             for(int j=0; j<i; j++)
                cout << ch;
             cout << endl;
            }
        }
        else
        {
            for(int i=1; i<=-1*f; i++)
            {
                for(int j=0; j<(-1*f-i+1); j++)
                    cout << ch;
                cout << endl;
            }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

