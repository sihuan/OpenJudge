#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int hour_, minute_, second_;

public:
    Time()
        : hour_(0)
        , minute_(0)
        , second_(0)
    {
    }
    Time(int h, int m, int s)
        : hour_(h)
        , minute_(m)
        , second_(s)
    {
    }
    void showTime()
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << hour_ << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_;
    }
};

class Date {
private:
    int year_, month_, day_;

public:
    Date()
        : year_(1)
        , month_(1)
        , day_(1)
    {
    }
    Date(int y, int m, int d)
        : year_(y)
        , month_(m)
        , day_(d)
    {
    }
    void showDate()
    {
        cout << setw(4) << setfill('0') << year_ << "-"
             << setw(2) << setfill('0') << month_ << "-"
             << setw(2) << setfill('0') << day_;
    }
};
int main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1574
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:2296 ms
	Memory:1268 kb
****************************************************************/

