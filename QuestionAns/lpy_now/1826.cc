#include <iostream>
using namespace std;
class CharGraph
{
public :
    int n;
    char arr;
    CharGraph(int a, char b):n(a), arr(b){}
    void print()
    {
        int i, j;
        if(n>0)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                    cout<<arr;
                    cout<<endl;
            }
        }
        if(n<0)
        {
            for(i=-n; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                    cout<<arr;
                    cout<<endl;
            }
        }
        if(n==0)
        cout<<endl;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

