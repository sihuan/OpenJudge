#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    string inp[cases];
    for(int i=0;i<cases;i++)
    {
        cin>>inp[i];
    }
    sort(inp,inp+cases);
    for(int i=0;i<cases;i++)
    {
        cout<<inp[i]<<endl;
    }
}
/**************************************************************
	Problem: 1355
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:1468 ms
	Memory:3112 kb
****************************************************************/

