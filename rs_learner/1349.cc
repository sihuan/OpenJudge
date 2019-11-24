#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
void Print(set<int> s)
{
    set<int>::iterator p;
    cout<<"{";
    for(p=s.begin();p!=s.end();p++)
    {
        if(p==s.begin())
            cout<<*p;
        else
            cout<<", "<<*p;
    }
    cout<<"}"<<endl;
}
int main()
{
   int n,i,j;
   cin>>n;
   for(i=1;i<=n;i++)
   {


      set<int> s1,s2;
      set<int> t1,t2,t3,t4,t5;
      int m,k,x,j;
      cin>>m;
      for(j=0;j<m;j++)
      {
          cin>>x;
          s1.insert(x);
      }
      cin>>k;
      for(j=0;j<k;j++)
      {
          cin>>x;
          s2.insert(x);
      }
      set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(t1,t1.begin()));
      set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(t2,t2.begin()));
      set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(t3,t3.begin()));
      set_difference(t1.begin(),t1.end(),s1.begin(),s1.end(),inserter(t4,t4.begin()));
      set_difference(t1.begin(),t1.end(),s2.begin(),s2.end(),inserter(t5,t5.begin()));
      cout<<"Case# "<<i<<":"<<endl;
      cout<<"A = ";
      Print(s1);
      cout<<"B = ";
      Print(s2);
      cout<<"A u B = ";
      Print(t1);
      cout<<"A n B = ";
      Print(t2);
      cout<<"A - B = ";
      Print(t3);
      cout<<"SA = ";
      Print(t4);
      cout<<"SB = ";
      Print(t5);
   }
    return 0;
}
/**************************************************************
	Problem: 1349
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

