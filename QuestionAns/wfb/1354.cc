#include <iostream>
#include <iomanip>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    int n;
    while(cin>>n) {
        map<string,int> m;
        for(int i=0; i<n; ++i) {
            string key;
            int value;
            cin>>key>>value;
            m[key] += value;
        }
        map<string,int>::iterator ite;
        for(ite=m.begin(); ite != m.end(); ++ite) {
            cout<<ite->first<<":"<<ite->second<<endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1354
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1276 kb
****************************************************************/

