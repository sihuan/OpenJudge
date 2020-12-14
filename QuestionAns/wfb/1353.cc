#include <iostream>
#include <iomanip>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    int n;
    while(cin>>n) {
        map<string,string> m;
        for(int i=0; i<n; ++i) {
            string key;
            string value;
            cin>>value>>key;
            m.insert(make_pair(key,value));
        }
        cin>>n;
        string tmp;
        map<string,string>::iterator ite;
        for(int i=0; i<n; ++i) {
            cin>>tmp;
            if(m.count(tmp)) cout<<m[tmp]<<endl;
            else cout<<"eh"<<endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1353
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:3220 ms
	Memory:10388 kb
****************************************************************/

