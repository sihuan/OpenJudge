#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    string op;
    int a,b,c;
    cin>>op>>a>>b;
    vector <int> v(a,b);
    while(cin>>op)
    {
        if(op != "Insert")
        {
            cin>>a>>b;
            if(op == "Modify") {
                v[a-1] = b;
            } else if(op == "Erase") {
                vector<int>::iterator beg = v.begin()+a-1;
                vector<int>::iterator end = v.begin()+b;
                v.erase(beg,end);
            } else if(op == "Print") {
                bool is = true;
                for(int i=a; i<=b; ++i) {
                    if(is) is=false;
                    else cout<<" ";
                    cout<<"["<<i<<"]:"<<v[i-1];
                }
                cout<<endl;
            }
        } else {
            cin>>a>>b>>c;
            vector<int>::iterator pos = v.begin()+a-1;
            vector<int>::iterator beg = v.begin()+b-1;
            vector<int>::iterator end = v.begin()+c;
            v.insert(pos,beg,end);
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1348
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:292 ms
	Memory:118468 kb
****************************************************************/

