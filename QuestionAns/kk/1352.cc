#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <deque>
#include <set>
#include <vector>
#include <iomanip>
#include <stack>
#include <map>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    char str[101];
    int i,lt,rt;
    while(cin>>str)
    {
        int flag=1;
        stack<char> stc;
        i=0;
        lt=0;
        rt=0;
        while(str[i]!=0)
        {
            stc.push(str[i]);
            i++;
        }
        while(!stc.empty())
        {
            if(stc.top()==')')
                rt++;
            else
                lt++;
            if(lt>rt)
            {
                flag=0;
                cout<<"NO"<<endl;
            }
            stc.pop();
        }
        if(flag)
        {
            if(lt==rt)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

}


/**************************************************************
	Problem: 1352
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

