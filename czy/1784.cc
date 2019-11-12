#include <iostream>
using namespace std;

class Array
{
private:
    int length;
    int *mems;
public:
    Array(){length = 0, mems = NULL;}
    friend istream &operator >> (istream &in, Array &p)
    {
        in >> p.length;
       p.mems = new int[p.length+1];
        for(int i=0; i<p.length; i++)
            in >> p.mems[i];
        return in;
    }
    friend ostream &operator << (ostream &out, Array &p)
    {
        for(int i=0; i<p.length; i++)
        {
            if(!i) out << p.mems[i];
            else out << " " << p.mems[i];
        }
        return out;
    }
    friend bool operator == (Array &p, Array &q)
    {
        if(p.length != q.length)
            return false;
        bool flag = false;
        for(int i=0; i<p.length; i++)
        {
            if(p.mems[i] != q.mems[i])
                return false;
        }
        return true;

    }


};
int main()
{
    int cases;
    cin>>cases;
    Array arraies[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>arraies[i];
    }
    cout<<arraies[0]<<endl;
    for (int i = 1; i < cases; i++)
    {
        if (arraies[i] == arraies[i - 1])
        {
            cout<<arraies[i]<<" "<<"equal to above."<<endl;
        }
        else
        {
            cout<<arraies[i]<<" "<<"unequal to above."<<endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1784
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

