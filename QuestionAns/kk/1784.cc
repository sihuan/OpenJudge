#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

class Array
{
public:
    Array()
    {
        mems=NULL;
        length=0;
    }
    bool operator ==(Array &another)
    {
        if(another.mems==mems)
            return true;
        if(length==another.length)
        {
            for(int i=0;i<length;i++)
                if(mems[i]!=another.mems[i])
                    return false;
            return true;
        }
        return false;
    }
    friend istream& operator >>(istream&,Array&);
    friend ostream& operator <<(ostream&,Array&);
private:
    int length;
    int *mems;
};
istream& operator >>(istream& is,Array& arr)
{
    is>>arr.length;
    arr.mems=new int[arr.length];
    for(int i=0;i<arr.length;i++)
        is>>arr.mems[i];
    return is;
}
ostream& operator <<(ostream& os,Array& arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if(i==0)
            os<<arr.mems[i];
        else
            os<<" "<<arr.mems[i];
    }
    return os;
}
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

