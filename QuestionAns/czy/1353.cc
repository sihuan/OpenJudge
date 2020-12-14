#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    ///char *w,*p;
    string w,p;
    map<string,string> d;
    while(cin>>n)
    {
        d.clear();
        while(n--)
    {
        /*scanf("%s",&w);
        w[sizeof(w)]=‘\0‘;
        scanf("%s",&p);
        p[sizeof(p)]=‘\0‘;*/

        cin>>w;
        cin>>p;
        d[p]=w;
    }

    cin>>n;
    ///scanf("%d",&m);
    while(n--)
    {
        ///char *tmp;
        string tmp;
        ///scanf("%s",&tmp);
        ///tmp[sizeof(tmp)]=‘\0‘;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:3320 ms
	Memory:10384 kb
****************************************************************/

