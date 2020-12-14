#include<bits/stdc++.h>
using namespace std;
int main()
{
    char com[20];
    int x,y;
    cin>>com>>x>>y;
    vector<int> v1(x,y);
    while(cin>>com>>x>>y && com!=NULL)
    {
        if(strcmp(com,"Build")==0)
        {
            v1.assign(x,y);
        }
        else if(strcmp(com,"Modify")==0)
        {
            v1[x-1]=y;
        }
        else if(strcmp(com,"Insert")==0)
        {
            int temp;
            cin>>temp;
            v1.insert(v1.begin()+x-1,v1.begin()+y-1,v1.begin()+temp);
        }
        else if(strcmp(com,"Erase")==0)
        {
            v1.erase(v1.begin()+x-1,v1.begin()+y);
        }
        else if(strcmp(com,"Print")==0)
        {
            int flag=0;
            for(int i=x;i<=y;++i)
            {
                if(flag==0) cout<<"["<<i<<"]:"<<v1[i-1];
                else cout<<" ["<<i<<"]:"<<v1[i-1];
                flag=1;
            }
            cout<<endl;
        }
    }
}
/**************************************************************
	Problem: 1348
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:296 ms
	Memory:118468 kb
****************************************************************/

