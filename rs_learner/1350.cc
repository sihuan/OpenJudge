#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int c;
    while(cin>>c)
    {
        set<int> s1,s2;
        set<int>::iterator p;
        int x;
        if(c!=0)
        {
            s1.insert(c);
            while(c!=0)
        {
            cin>>x;
            if(x!=0&&c!=0)
                s1.insert(x);
            else
                break;
        }
        }
        while(cin>>x)
        {
            if(x!=0)
                s2.insert(x);
            else
                break;
        }
        set<int> temp;
        set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(temp,temp.begin()));
        if(temp.size()==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
/**************************************************************
	Problem: 1350
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

