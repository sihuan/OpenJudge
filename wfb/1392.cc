#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private :
    int h_,m_,s_;
    static int cnt;
public:
    Time() {++cnt; h_=0; m_=0; s_=0;}
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {++cnt;}
    Time(const Time& t) : h_(t.hour()),m_(t.minute()),s_(t.second()) {
        ++cnt; cout<<"There was a call to the copy constructor : "
        <<h_<<","<<m_<<","<<s_<<endl;
    }
    ~Time() {}
    int hour() const {return h_;}
    int minute() const {return m_;}
    int second() const {return s_;}
    void hour(int h) {h_=h;}
    void minute(int m) {m_=m;}
    void second(int s) {s_=s;}
    const Time& setTime(int h,int m,int s) {h_=h;m_=m;s_=s; return *this;}
    const Time& setTime(const Time& t) {h_=t.hour(); m_=t.minute();s_=t.second(); return *this;}
    const Time& getTime() const {return *this;}
    const Time& inputTime() {
        int h,m,s;
        cin>>h>>m>>s;
        h_ = h; m_=m; s_=s;
        return *this;
    }
    void showTime() const {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            cout<<"Time error"<<endl;
        else
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<endl;
    }
    void showTime12Hour() const {
       if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            cout<<"Time error"<<endl;
        else if(h_ == 0)
            cout<<12<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" a.m."<<endl;
        else if(h_<12)
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" a.m."<<endl;
        else if(h_ == 12)
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" p.m."<<endl;
        else
           cout<<setw(2)<<setfill('0')<<h_-12<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" p.m."<<endl;
    }
    static int getNumber()  {return cnt;}
    static void displayNumber()  {cout<<"Now, There is "<<cnt<<" object of Time."<<endl;}
};
int Time::cnt = 0;


int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}

/**************************************************************
	Problem: 1392
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:2760 ms
	Memory:1268 kb
****************************************************************/

