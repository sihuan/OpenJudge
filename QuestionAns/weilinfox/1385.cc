#include <iostream>
#include <iomanip>
using namespace std;

class Time {
        int h, m, s;
public:
        Time(int a, int b, int c) {
                h = a;
                m = b;
                s = c;
        }
        void showTime() {
                std::cout << fixed << std::setw(2) << std::setfill('0');
                std::cout << h << ':';
                std::cout << fixed << std::setw(2) << std::setfill('0');
                std::cout << m << ':';
                std::cout << fixed << std::setw(2) << std::setfill('0');
                std::cout << s << std::endl;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

