#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    ///char *w,*p;
    string w;
    int p;
    map<string,int> m;
    while(cin>>n)
    {
        m.clear();
        while(n--)
        {
            cin>>w;
            cin>>p;
            if(m.count(w)!=0) m[w]+=p;
            else m.insert(make_pair(w,p));
        }
        map<string, int>::iterator iter;
       for (iter = m.begin();iter != m.end();++iter) {
        cout << iter->first<<":"<<iter->second << endl;
    }
    }

    return 0;
}

/**************************************************************
	Problem: 1354
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:16 ms
	Memory:1280 kb
****************************************************************/

