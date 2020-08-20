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

class Char{
	private:
		char ch;
	public:
		Char(char c){
			ch = c;
		}
		char change(){
			if(ch >= 'a' && ch <= 'z'){
				ch -= 32;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				ch += 32;
			}
			return ch;
		}
};
int main()
{
    char ch;
    while(cin>>ch)
    {
        Char c(ch);
        cout<<c.change()<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 2091
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

