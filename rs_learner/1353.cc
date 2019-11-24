#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int i,n;
    string w,p;
    map<string,string> d;
    while(cin>>n)
    {
        d.clear();
        while(n--)
    {

        cin>>w;
        cin>>p;
        d[p]=w;
    }

    cin>>n;
    while(n--)
    {
        string tmp;
        cin>>tmp;
        if(d.count(tmp)!=0)
            cout<<d[tmp]<<endl;
        else cout<<"eh"<<endl;
    }
    }

    return 0;
}

/**************************************************************
	Problem: 1353
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:3428 ms
	Memory:9188 kb
****************************************************************/

