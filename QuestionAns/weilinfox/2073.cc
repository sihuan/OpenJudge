#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class Data {
        int data;
public:
        Data (int d=0):data(d) {}
        void setValue (int v) {data = v;}
        bool isPalindrome () {
                data = abs(data);
                string s = "";
                int len;
                if (data == 0) return true;
                while (data > 0) {
                        s += '0' + data % 10;
                        data /= 10;
                }
                len = s.length();
                for (int i = 0; i < len/2; i++) {
                        if (s[i] != s[len-i-1]) return false;
                }
                return true;
        }
};

int main()
{
    Data data;
    int v;
    while (cin>>v)
    {
        data.setValue(v);
        if (data.isPalindrome())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2073
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

