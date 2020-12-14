#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int n,m;
class User
{
public:	
	void Init()
	{
		cin>>name;
		getchar(); 
		for(int i=1;i<=m;++i)
		{
			char c;
			scanf("%c ",&c);
			answer[i]=c-'a'+1;
		}
		scanf("%d",&Q);
	}
	int nameLen()
	{
		int len=name.size();
		return len;
	}
	int getans(int x)
	{
		return answer[x];
	}
	int getQ()
	{
		return Q;
	}
	string getName()
	{
		return name;
	}
private:
	string name;	
	int answer[21],Q;
};
int main()
{
	scanf("%d %d",&n,&m);
	User user[101];
	
	for(int i=1;i<=n;++i)
		user[i].Init();
		
	int max_name_len=0;
	for(int i=1;i<=n;++i)
	{
		int len=user[i].nameLen();
		max_name_len=max(max_name_len,len);
	}
	
	string name;
	int flag=0;
	for(int i=1;i<=n;++i)
	{
		flag=0;
		int q=user[i].getQ();
		int num=0;
		
		name=user[i].getName();
		cout<<name;
		int xlen=max_name_len-name.size();
		for(int kk=1;kk<=xlen;++kk)
			cout<<" ";
		cout<<":"; 
		
		for(int j=1;j<=n;++j)
		{
			num=0;
			if(j==i)	continue;
			for(int k=1;k<=m;++k)
				if(user[i].getans(k)==user[j].getans(k))
					num++;
			if(num>=q)
			{
				if(flag)
					cout<<",";
				flag++;
				name=user[j].getName();
				cout<<name;
			}
		}
		if(!flag)
			cout<<"NONE!";
		cout<<endl;
	
	}
	
	return 0;
}


/**************************************************************
	Problem: 1078
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

