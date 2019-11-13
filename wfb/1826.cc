#include <iostream>

using namespace std;

class CharGraph{
private:
    int n_;
    char ch_;
public:
    CharGraph(int n,char ch) : n_(n),ch_(ch) {}
    void print() const {
        if(n_ == 0) cout<<endl;
        else if(n_ > 0) {
            for(int i=1; i<=n_; ++i){
                for(int j=1; j<=i; ++j)
                    cout<<ch_;
                cout<<endl;
            }
        } else {
            for(int i=-n_; i>=1; --i) {
                for(int j=i; j>=1; --j)
                    cout<<ch_;
                cout<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

