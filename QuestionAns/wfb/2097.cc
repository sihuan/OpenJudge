#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void put_str(char *str,int n=10,int m=0){
    int l = strlen(str);
    int st = m<l?m:l;
    int ed = m+n<l?m+n:l;
    for(int i=st; i<ed; ++i){
        cout<<str[i];
    }
    cout<<endl;
}
int main()
{
    char s[100];
    int k;
    cin >> s;
    while(cin >> k)
    {
        int l, m;
        if(k == 0)
            put_str(s);
        if(k == 1)
        {
            cin >> l;
            put_str(s, l);
        }

        if(k == 2)
        {
            cin >> l >> m;
            put_str(s, l, m);
        }
    }
}

/**************************************************************
	Problem: 2097
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

