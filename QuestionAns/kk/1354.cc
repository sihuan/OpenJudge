#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        map<string,int> fruit;
        for(int i=0; i<n; i++)
        {
            string name;
            int num;
            cin>>name>>num;
            fruit[name]+=num;
        }
        for (map<string, int>::iterator i = fruit.begin(); i != fruit.end(); i++)
            cout << i->first << ":" << i->second << endl;
    }
}
/**************************************************************
	Problem: 1354
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:20 ms
	Memory:1276 kb
****************************************************************/

