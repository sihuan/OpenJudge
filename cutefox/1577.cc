#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
 
 
class Time{
   private:
      friend class DateTime;
      int hh,mm,ss;
   public:
      Time():hh(0),mm(0),ss(0){
          cout<<"CREATE Time : ("<<hh<<", "<<mm<<", "<<ss<<")"<<endl;
      }
      Time(int a,int b,int c):hh(a),mm(b),ss(c){
           cout<<"CREATE Time : ("<<hh<<", "<<mm<<", "<<ss<<")"<<endl;
      }
      Time(const Time &p):hh(p.hh),mm(p.mm),ss(p.ss){
          cout<<"COPY   Time : ("<<hh<<", "<<mm<<", "<<ss<<")"<<endl;
      }
      Time &setTime(int a,int b,int c){hh=a;mm=b;ss=c;return *this;}
      void showTime(){
        cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss;
      }
      ~Time(){}
};
 
class Date{
   private:
       friend class DateTime;
       int year,month,day;
   public:
       Date():year(1),month(1),day(1){
           cout<<"CREATE Date : ("<<year<<", "<<month<<", "<<day<<")"<<endl;
       }
       Date(const Date &p):year(p.year),month(p.month),day(p.day){
 
          cout<<"COPY   Date : ("<<year<<", "<<month<<", "<<day<<")"<<endl;
      }
       Date(int a,int b,int c):year(a),month(b),day(c){
          cout<<"CREATE Date : ("<<year<<", "<<month<<", "<<day<<")"<<endl;
       }
       Date &setDate(int a,int b,int c){year=a;month=b;day=c;return *this;}
       void showDate() {
           cout<<setfill('0')<<setw(4)<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')<<setw(2)<<day<<" ";
       }
       ~Date(){}
};
 
 
 
class DateTime{
   private:
       friend class Date;
       friend class Time;
       Time T;
       Date D;
       int year1,month1,day1,hh1,mm1,ss1;
   public:
       DateTime(){
         cout<<"CREATE DateTime : ("<<D.year<<", "<<D.month<<", "<<D.day<<", "<<T.hh<<", "<<T.mm<<", "<<T.ss<<")"<<endl;
       }
       DateTime(const Date& d,const Time& t):D(d),T(t){
         cout<<"CREATE DateTime : ("<<D.year<<", "<<D.month<<", "<<D.day<<") ("<<T.hh<<", "<<T.mm<<", "<<T.ss<<")"<<endl;
       }
       DateTime(const DateTime& p):T(p.T),D(p.D){
        cout<<"COPY   DateTime : ("<<D.year<<", "<<D.month<<", "<<D.day<<") ("<<T.hh<<", "<<T.mm<<", "<<T.ss<<")"<<endl;
       }
       DateTime(int a,int b,int c,int d,int e,int f):D(a,b,c),T(d,e,f){
       }
       int const year(int year1){D.year=year1;}
       int const year() const {return D.year;}
       int const month(int month1){D.month=month1;}
       int const month() const{return D.month;}
       int const day(int day1){D.day=day1;}
       int const day() const{return D.day;}
       int const hour(int hh1){T.hh=hh1;}
       int const hour() const{return T.hh;}
       int const minute(int mm1){T.mm=mm1;}
       int const minute() const{return T.mm;}
       int const second(int ss1){T.ss=ss1;}
       int const second() const{return T.ss;}
       void showDateTime(){
         D.showDate();  T.showTime();
       }
       DateTime &setDateTime(int a,int b,int c,int d,int e,int f){
           D.setDate(a,b,c);T.setTime(d,e,f);return *this;
       }
       ~DateTime(){}
};

int main()
{
    const Date date(1000, 10, 10), dt(date);
    const Time time(1, 1, 1), tm(time);
    DateTime date_time(dt, tm);
    const DateTime cnt(date_time);
    cout << "DateTime : " << cnt.year() << " " << cnt.month() << " " << cnt.day();
    cout << " " << cnt.hour() << " " << cnt.minute() << " " << cnt.second();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.year(year);
        date_time.month(month);
        date_time.day(day);
        date_time.hour(hour);
        date_time.minute(minute);
        date_time.second(second);
        date_time.showDateTime();
        cout << endl;
    }
}
/**************************************************************
	Problem: 1577
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:1220 ms
	Memory:1272 kb
****************************************************************/

