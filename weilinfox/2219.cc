#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

const int maxn = 100010;


int a[maxn];
int b[maxn];
int i;


bool judge()
{
    for(int j = 0; j<i; j++) {
        if(a[j]!=b[j])
            return false;
    }
    return true;
}


int main()
{
    int x;
    i = 0;
    while(cin>>x) {
        a[i++] = x;
    }

    while(true) {
        b[0] = a[0];
        b[i-1] = a[i-1];
        for(int j=1; j<i-1; j++) {
            int t =(b[j-1]+a[j+1]);
            if(t % 2 ==0) b[j] = t / 2;
            else {
                if(t > 0) b[j] = t/2+1;
                else b[j] = t/2-1;
            }
        }
        if(judge()) break;
        for(int j=0; j<i; j++) a[j] = b[j];
    }
    cout<<b[0];
    for(int j=1; j<i; j++)
        cout<<" "<<b[j];
    return 0;
}

/**************************************************************
	Problem: 2219
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:2048 kb
****************************************************************/

