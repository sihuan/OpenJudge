
#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
public:
    Date(){ int year = 1, month = 1, day = 1; }
    Date(int y, int m, int d)
    {
        year=y;  month=m;  day=d;
        cout << "CREATE Date : (" << y <<", "<< m <<", "<< d <<")"<< endl;
    }
    void showDate()const
    {
        cout << setw(4) << setfill('0') << year << "-"
             << setw(2) << setfill('0') << month << "-"
             << setw(2) << setfill('0') << day ;
    }
    void setDate(int y1, int m1, int d1)
    {
        year = y1;  month = m1;  day = d1;
    }
private:
    int year, month, day;
};
class Time
{
public:
    Time(){ int hour = 0, minute = 0, second = 0; }
    Time(int h, int mi, int s){
        hour=h;  minute=mi;  second=s;
        cout << "CREATE Time : (" << h <<", "<< mi <<", "<< s <<")"<< endl;
    }
    void showTime()const{
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second ;
    }
    void setTime(int h1, int mi1, int s1){
        hour=h1;  minute=mi1;  second=s1;
    }
private:
    int hour, minute, second ;
};
class DateTime
{
public:
    DateTime():date(1,1,1),time(0,0,0)
    {
        cout << "CREATE DateTime : (" << 1<< ", " << 1 << ", "
             << 1 << ", " << 0 << ", " << 0 << ", " << 0 << ")" << endl;
    }
    DateTime(int y, int m, int d, int h, int mi, int s):date(y,m,d),time(h,mi,s)
    {
        cout << "CREATE DateTime : (" << y << ", " << m << ", "
             << d << ", " << h << ", " << m << ", " << s << ")" << endl;
    }
    DateTime(const Date&d,const Time&t):date(d),time(t){}
    void showDateTime()const
    {
        date.showDate();
        cout<<" ";
        time.showTime();
    }
    DateTime&setDateTime( int y, int m, int d, int h, int mi, int s )
    {
        date.setDate(y,m,d);
        time.setTime(h,mi,s);
        return *this;
    }
private:
    Time time;    Date date;
};

int main()
{
    DateTime date_time;
    date_time.showDateTime();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.setDateTime(year, month, day, hour, minute, second);
        date_time.showDateTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1576
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:1252 ms
	Memory:1268 kb
****************************************************************/

