#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Time{
	private:
		int hour, minute, second;
	public:
		Time(int a, int b, int c){
			hour = a, minute = b, second = c;
		}
		void showTime(){
			printf("%02d:%02d:%02d\n", hour, minute, second);
		}
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}

/**************************************************************
	Problem: 1385
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:2164 ms
	Memory:1268 kb
****************************************************************/

