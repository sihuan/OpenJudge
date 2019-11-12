#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
        multiset <int> m;
        multiset <int> :: iterator  p;
        for(int i = 0; i < n; i++)
        {
            char order;
            int elem;
            cin >> order >> elem;
            if(order == 'i')
                m.insert(elem);
            if(order == 'd')
            {
                p = m.find(elem);
                m.erase(p);
            }
        }
        p = m.begin();
        cout << *p;
        p++;
        for(; p != m.end(); p++) cout << " " << *p;
           cout << endl;
    }
}


/**************************************************************
	Problem: 1362
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

