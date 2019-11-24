#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string l;
    int a,b,c;
    cin>>l;
    cin>>a>>b;
    vector<int> v(a,b);
    while(cin>>l)
    {

        if(l=="Modify")
        {
            cin>>a>>b;
            v[a-1]=b;
        }
        else if(l=="Insert")
        {
            cin>>a>>b>>c;
            v.insert(v.begin()+a-1,v.begin()+b-1,v.begin()+c);//注意这里插入到的地方是不包括最后一个元素的！很坑！
        }
        else if(l=="Erase")
        {
            cin>>a>>b;
            v.erase(v.begin()+a-1,v.begin()+b);
        }
        else if(l=="Print")
        {
            cin>>a>>b;
            for(int i=a-1;i<b-1;i++)
            {
                cout<<"["<<i+1<<"]"<<":"<<v[i]<<" ";
            }
            cout<<"["<<b<<"]"<<":"<<v[b-1]<<endl;
        }
    }
   return 0;
}
/**************************************************************
	Problem: 1348
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:332 ms
	Memory:118468 kb
****************************************************************/

