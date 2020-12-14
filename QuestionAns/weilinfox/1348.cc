#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>

using namespace std;

int main()
{
   string l;
   int a,b,c,k;
   vector<int> s;
   while(cin>>l){
    if(l=="Build"){cin>>a>>b;s.assign(a,b);}
    else if(l=="Modify") {cin>>a>>b;s[a-1]=b;}
    else if(l=="Insert") {cin>>a>>b>>c;s.insert(s.begin()+a-1,s.begin()+b-1,s.begin()+c);}
    else if(l=="Erase") {cin>>a>>b;s.erase(s.begin()+a-1,s.begin()+b);}
    else if(l=="Print") {
        cin>>a>>b;
        int i;
        for(i=a-1;i<b;i++) {
            if(i!=b-1)
                cout<<"["<<i+1<<"]"<<":"<<s[i]<<" ";
            else
                cout<<"["<<i+1<<"]"<<":"<<s[i]<<endl;
        }

    }
   }
   return 0;
}

/**************************************************************
	Problem: 1348
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:312 ms
	Memory:118468 kb
****************************************************************/

