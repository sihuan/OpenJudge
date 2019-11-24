#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    map<string,int> sal;
    map<string,int>::iterator p;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
    {
        string fruit;
        int a;
        cin>>fruit>>a;
        sal[fruit]=sal[fruit]+a;
    }
    for(p=sal.begin();p!=sal.end();p++)
    {
        cout<<p->first<<":"<<p->second<<endl;
    }
        sal.clear();
    }

    return 0;
}

/**************************************************************
	Problem: 1354
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:20 ms
	Memory:1276 kb
****************************************************************/

