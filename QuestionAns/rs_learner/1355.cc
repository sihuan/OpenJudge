#include<map>
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    int n;
    multiset<string> s;
    multiset<string>::iterator p;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    for(p=s.begin();p!=s.end();p++)
    {
        cout<<*p<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1355
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:1496 ms
	Memory:4180 kb
****************************************************************/

