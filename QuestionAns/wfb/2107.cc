#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void swp(int& a,int& b,int& c,int k=0){
    int tmp;
    if(k==0){
        tmp = a;
        a = b;
        b = c;
        c = tmp;
    } else {
        k = k%3;
        if(k == 2){
            tmp = a;
            a = b;
            b = c;
            c = tmp;
        } else if(k == 1){
            tmp = c;
            c = b;
            b = a;
            a = tmp;
        }
    }
}

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c;
    while(cin >> k)
    {
        if(k == 0)
            swp(a, b, c);
        else
            swp(a, b, c, k);
        cout << a << " " << b << " " << c << " " << endl;
    }
}

/**************************************************************
	Problem: 2107
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

