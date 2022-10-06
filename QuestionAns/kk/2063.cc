#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>


using namespace std;

int main()
{
    char in;
    vector<char> str;
    while(cin>>in)
        str.insert(str.end(),in);
    vector<char>::iterator i=str.begin();
    vector<char>::iterator j=(str.end()-1);
    for(;i<j;i++,j--)
    {
        if((*i)!=(*j))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

/**************************************************************
	Problem: 2063
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

